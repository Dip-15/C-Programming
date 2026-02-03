#include<stdio.h>
void sumANDavg(int*i,int*j,int*sum,float*avg)
{
    *sum=*i+*j;
    *avg=(float)*sum/2;
}
int main()
{
   int i=10,j=15,sum;
   float avg;
   sumANDavg(&i,&j,&sum,&avg);
   printf("Sum=%d\n",sum);
   printf("Avg=%f\n",avg);
   return 0;
}

