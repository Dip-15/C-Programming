#include<stdio.h>
int main()
{
    printf("5 divided by 2 leaves the reminder %d\n",5%2);
    printf("5 divided by -2 leaves the reminder %d\n",5%-2);
    printf("-5 divided by 2 leaves the reminder %d\n",-5%2);
    //can't be applied on float
    //printf("-5 divided by 2 leaves the reminder %d\n",5.0%2);
    return 0;
}

