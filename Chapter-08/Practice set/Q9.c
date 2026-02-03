#include<stdio.h>
int present(char str[],char c)
{
    char *ptr=str;
    char E[10];
    while(*ptr!='\0')
    {
        if(*ptr==c)
        {
            return 1;
        }
        ptr++;
    }
}
int main()
{
    char str[]="Krishna shyam";
    if(present(str,'u'))
    {
        printf("This character is present in %s\n",str);
    }
    else
    {
       printf("This character isn't present in %s\n",str);
    }

    return 0;
}

