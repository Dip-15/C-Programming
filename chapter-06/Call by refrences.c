#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int x=4,y=3;
    printf("x and y value before swap %d and %d\n",x,y);
    swap(&x,&y);
    printf("x and y value after swap %d and %d",x,y);
    return 0;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
