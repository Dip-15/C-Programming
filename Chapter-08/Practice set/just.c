#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30];
    char str2[30];
    char c;
    int i=0;
    printf("Enter the string1:");
    scanf("%s",str1);
    printf("Enter the string2:\n");
    while(c!='\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        str2[i]=c;
        i++;
    }
    str2[i-1]='\0';
    printf("The str1=%s\n",str1);
    printf("The str2=%s\n",str2);
    printf("Difference=%d",strcmp(str1,str2));
    return 0;


}
