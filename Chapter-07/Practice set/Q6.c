#include<stdio.h>
void pass(int pt[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(*(pt+i)>0)
        {
            sum+=*(pt+i);
        }
    }
    printf("The sum of positive integer is = %d",sum);
}
int main()
{
    int arr[]={-1,1,-2,2,-3,3,-4,4,-5,5};
    pass(arr,10);
}
