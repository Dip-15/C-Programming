#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter the value for element %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    //int arr[]={15,12,32,45,8};
    pass(arr,5);
    return 0;
}
void pass(int pt[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("The value of element %d = %d\n",i+1,pt[i]);
    }
}
