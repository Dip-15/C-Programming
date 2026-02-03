#include<stdio.h>
int main()
{
    int n,first=0,second=1,next,i=0;
    printf("Enter the number :");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\t",first);
        next=first+second;
        first=second;
        second=next;
        i++;
    }
    return 0;
}
