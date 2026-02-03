#include<stdio.h>
int
main ()
{
    int Sub1, Sub2, Sub3;
    float total;
    printf ("Enter the sub1:\n");
    scanf ("%d", &Sub1);
    printf ("Enter the Sub2:\n");
    scanf ("%d", &Sub2);
    printf ("Enter the Sub3:\n");
    scanf ("%d", &Sub3);
    total = (Sub1 + Sub2 + Sub3) / 3;
    if ((total<= 40)||Sub1 <= 33 || Sub2 <= 33 || Sub3 <= 33)
    {
        printf ("fail%f", total);
    }
    else
    {
        printf("pass%f",total);
    }
    return 0;

}

