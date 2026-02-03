#include<stdio.h>

int main()
{
    char str[]="Ram";
    char *ptr=str;
    int a=0;
    while(*ptr!='\0')
    {
        int i=0;
        i++;
        a+=i;
        ptr++;
    }
    printf("The length of the string is:%d",a);
    return 0;
}

