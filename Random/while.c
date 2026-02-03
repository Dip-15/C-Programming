#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int i=5;
    do
    {
        printf("%d\n",n);
        n++;
    }
    while(n<=10);
    return 0;
}
