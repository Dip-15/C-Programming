#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
           printf("*\n");
        }
        else
        {
           printf("*",i);
           printf("\n");
        }
    }
    return 0;
}
