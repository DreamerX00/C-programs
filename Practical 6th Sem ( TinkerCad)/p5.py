import pyautogui as pygu 
from time import sleep 
import pyperclip 
import webbrowser 
import os 
import RPi.GPIO as IO            
import time
                              
IO.setmode (IO.BOARD)       
IO.setup(40,IO.OUT)             
webbrowser.open_new('https://web.whatsapp.com/')

default_message = [
    "Hi I am your Whatsapp Bot :robot \ntry any of the following :notes \n commands",
    "*turn on light* - _Turns on the led connected to pi_",
    "*turn off light* - _Turns off the led connected to pi_"]
turn_on_light = [
    "Sure, your :bulb \n Light is now turned on"
]
turn_off_light = [
    "Okay, Your LED is not turned off"
]

def open_whatsapp():
    find_whatsapp_header = None
    while find_whatsapp_header is None:
        find_whatsapp_header = pygu.locateOnScreen("Whatsapp_header.JPG", confidence=.8)
        use_here_button_pos = pygu.locateOnScreen("use_here_button.JPG", confidence=.8)
        if (use_here_button_pos):
            print("Whatsapp is being used somewhere else, clicking on use here")
            sleep(2)
            pygu.moveTo(use_here_button_pos[0], use_here_button_pos[1], duration=0.5)
            pygu.click()
        print(".")
        sleep(2)
    return 1

def new_chat_available():
    green_circle_pos = pygu.locateOnScreen("green_circle.JPG", confidence=.8)
    if (green_circle_pos):
        sleep(2)
        pygu.moveTo(green_circle_pos[0], green_circle_pos[1], duration=0.5)
        pygu.click()
        sleep(1)
        ok_button_pos = pygu.locateOnScreen("ok_button.JPG", confidence=.8)
        if (ok_button_pos):
            pygu.moveTo(ok_button_pos[0], ok_button_pos[1], duration=0.5)
            pygu.click()
        return 1
    else:
        sleep(1)
        return 0
    
def read_last_message():
    smily_paperclip_pos = pygu.locateOnScreen("smily_paperclip.JPG", confidence=.6)
    pygu.moveTo(smily_paperclip_pos[0], smily_paperclip_pos[1])
    pygu.moveTo(smily_paperclip_pos[0] + 50, smily_paperclip_pos[1] - 35, duration=0.5)
    sleep(1)
    pygu.tripleClick()
    pygu.hotkey('ctrl', 'c')
    sleep(0.1)
    return (pyperclip.paste())

def get_response(incoming_message):
    if "CD_bot" in incoming_message:
        return default_message
    if "turn on light" in incoming_message:
        IO.output(40,1)                      
        return turn_on_light
    if "turn off light" in incoming_message:
        IO.output(40,0)                      
        return turn_off_light
    else:
        return ""
    
def send_message(message_content):
    for content in message_content:
        pygu.typewrite(content, interval=.02)
        pygu.hotkey('shift', 'enter')
    sleep(1)
    pygu.hotkey('enter') 
    
def new_message_available():
    current_mouse_pos = pygu.position()
    pointer_color = pygu.pixel(current_mouse_pos[0], current_mouse_pos[1])
    if (pointer_color == (255, 255, 255)):
        return 1
    else:
        return 0
    
if (open_whatsapp()): 
    print("##Whatsapp page ready for automation##")
while(1):
    if (new_chat_available() or new_message_available()):
        print("New chat or message is available")
        incoming_message = read_last_message() 
        message_content = get_response(incoming_message) 
        send_message(message_content) 