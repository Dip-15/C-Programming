#include<stdio.h>
int occurence(char str[],char c)
{
    int i=0;
    char *ptr=str;
    while(*ptr!='\0')
    {
        if(*ptr==c)
        {
            i++;
        }
        ptr++;
    }
    return i;
}
int main()
{
    char str[]="Radharani";
    int count=occurence(str,'d');
    printf("The occurence of d is %d",count);
    return 0;
}
