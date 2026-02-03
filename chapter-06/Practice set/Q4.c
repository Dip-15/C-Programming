#include<stdio.h>
void pass(int a,int b,int*sum,float*avg)
{
    *sum=a+b;
    *avg=(float)*(sum)/2;
}
int main()
{
    int i=6,j=3,sum;
    float avg;
    pass(i,j,&sum,&avg);
    printf("Sum=%d\n",sum);
    printf("avg=%f\n",avg);
    return 0;
}
