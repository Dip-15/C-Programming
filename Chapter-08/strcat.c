#include<stdio.h>
int main()
{
    char st1[50]="Radha";
    char st2[]="Krishna";
    strcat(st1,st2);
    printf("Now the value of st1: %s",st1);
    return 0;
}
