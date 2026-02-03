#include<stdio.h>
int main()
{
    char ch;
    // 97-122 is a-z acording to ASCLL table
    printf("Enter the char:");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)
    {
        printf("It is lower case");
    }
    else
    {
        printf("It is not lower case");
    }
    return 0;
}
