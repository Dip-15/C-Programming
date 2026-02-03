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
    int arr[3][10];
     Pass(arr[0],10,2);
     Pass(arr[1],10,7);
     Pass(arr[2],10,9);
    return 0;
}


