#include<stdio.h>
void strcpy(char*st,char*rt)
{
    int i=0;
    while(rt[i]!='\0')
    {
        st[i]=rt[i];
        i++;
    }
    st[i]='\0';

}
int main()
{
    char str1[]="Ram";
    char str2[30];
    strcpy(str2,str1);
    printf("The copy of string st(str1) is %s\n",str2);
    return 0;
}

