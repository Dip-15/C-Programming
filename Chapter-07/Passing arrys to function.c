#include<stdio.h>
int main()
{
    int arr[]={15,45,30,25};
    pass(arr,4);
    return 0;
}
void pass(int *pt,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("The value of element arr[%d] = %d\n",i+1,*(pt+i));
    }
}
