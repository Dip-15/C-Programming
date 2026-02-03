#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    char str2[50];
    int i=0;
    char c;

    printf("Enter the String in str1[50]:");
    scanf("%s",str1);
    printf("Enter the String in str2[50]:\n");

    while(c!='\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        str2[i]=c;
        i++;
    }
    str2[i-1]='\0';

    printf("The value of str1 is = %s\n",str1);
    printf("The value of str2 is = %s\n",str2);
    printf("The different value of two string %d",strcmp(str1,str2));
    return 0;
}
