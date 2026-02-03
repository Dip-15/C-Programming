#include<stdio.h>
void encrypt(char *cr)
{
    char*ptr=cr;
    while(*ptr!='\0')
    {
        *ptr=*ptr-1;
        ptr++;
    }

}
int main()
{
    char c[]="J!mpwf!zpv!ebsmjoh";
    encrypt(c);
    printf("The encrypt is %s",c);
}

