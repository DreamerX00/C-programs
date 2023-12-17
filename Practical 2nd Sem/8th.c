#include <stdio.h>
#include <stdlib.h>
void main();
    struct s1
    {
    int a;
    struct s1 *n1;
    };
    struct s1 *h1, *t1, *ptr1;
    struct s2
    {
    int b;
    struct s2 *n2;
    };
    struct s2 *h2, *t2, *ptr2;
    void main()
    {
    int n=1;
    h1 = 0;
    h2 = 0;
    while (n <= 10)
    {
    if (n % 2 == 0)
    {
    ptr1 = (struct s1 *)malloc(sizeof(struct s1));
    ptr1->a = n;
    ptr1->n1 = 0;
    if (h1 == 0)
    {
    h1 = t1 = ptr1;
    }
    else
    {
    t1->n1 = ptr1;
    t1 = ptr1;
    }
    }
    else
    {
    ptr2 = (struct s2 *)malloc(sizeof(struct s2));
    ptr2->b = n;
    ptr2->n2 = 0;
    if (h2 == 0)
    {
    h2 = t2 = ptr2;
    }
    else
    {
    t2->n2 = ptr2;
    t2 = ptr2;
    }
    }
    n++;
    }
    t1 = h1;
    printf("first list\n");
    while (t1 != 0)
    {
    printf("%d\n", t1->a);
    t1 = t1->n1;
    }
    t2 = h2;
    printf("second list\n");
    while (t2 != 0)
    {
    printf("%d\n", t2->b);
    t2 = t2->n2;
    }
}