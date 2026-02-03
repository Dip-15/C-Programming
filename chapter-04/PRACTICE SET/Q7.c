#include<stdio.h>
int main()
{
    int n=8,i=1,k,sum=0;
    while(i<=10)
    {
        sum+=n*i;
        i++;
    }
    printf("%d\n",sum);
    return 0;

}
