#include<stdio.h>
void ref(int *k)
{
    *k*=10;
}
int main()
{
   int a=20;
   printf("Before pass =%d\n",a);
   ref(&a);
   printf("After pass =%d\n",a);
   return 0;
}
