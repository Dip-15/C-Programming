#include<stdio.h>
int strlenth(char*st)
{
    char *ptr=st;
    int len =0;
    while(*ptr!='\0')
    {
        len++;
        ptr++;
    }
    //return len;
}
int main()
{
    char str[]="Ram";
    int i = strlenth(str);
    printf("The length of string is %d\n",i);
    return 0;
}
