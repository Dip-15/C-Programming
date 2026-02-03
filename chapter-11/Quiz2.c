#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int*ptr;
    printf("Enter the number of size:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the number in ptr[%d]: ",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("The value of ptr[%d] = %d\n",i+1,ptr[i]);
    }
    return 0;

}
