#include<stdio.h>
void Pass(int*ptr,int n,int num)
{
    printf("The multiplication table of %d:\n",num);
    for(int i=0;i<n;i++)
    {
       ptr[i]= num*(i+1);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d*%d=%d\n",num,i+1,ptr[i]);
    }
    printf("********************\n\n");
}
int main()
{
    int m,n;
    printf("Enter the value:");
    scanf("%d",&m);
    printf("Enter the value how long you want to multiplication:");
    scanf("%d",&n);
    int arr[m][n];
    int num;
    for(int i=0;i<m;i++)
    {
        printf("Emter the num:");
        scanf("%d",&num);
        Pass(arr[i],n,num);
    }
    return 0;
}


