#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    pass(arr,7);
    for(int i=0;i<7;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void pass(int *arr,int n)
{
    int temp;
     for(int i=0;i<n/2;i++)
     {
         temp=arr[n-i-1];
         arr[n-i-1]=arr[i];
         arr[i]=temp;
     }
}
