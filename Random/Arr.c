#include<stdio.h>
void pass(int*ptr)
{
     *(ptr+1)=200;
     
}
void main()
{
  int row=2;
  int col=3;
    int arr[2][3]={10,20,30,40,50,60};
    int *ptr;
    for(ptr=&arr[0][0];ptr<=&arr[row-1][col-1];ptr++)
    {
      printf("val=%d\n",*ptr);
    }
    pass(&arr[0][0]);
    printf("\n");
    for(ptr=&arr[0][0];ptr<=&arr[row-1][col-1];ptr++)
    {
      printf("val=%d\n",*ptr);
    }
}
