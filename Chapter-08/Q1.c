#include<stdio.h>
int main()
{
    char str[]="krishna";
    //char str[]={'K','r','i','s','h','n','a','\0'};
    char *ptr=str;
    //char *ptr= "Krishna";
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}
