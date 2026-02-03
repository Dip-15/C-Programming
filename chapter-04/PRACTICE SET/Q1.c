#include<stdio.h>
int main()
{
    int k,i,m;
    printf("Enter the number:");
    scanf("%d",&k);
    while(k<=20)
    {
        i=1;
        while(i<=10)
        {
            m=k*i;
            printf("%d*%d=%d\n",k,i,m);
            i++;
        }
        k++;
        printf("\n");
    }
    return 0;
}
