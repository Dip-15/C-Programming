#include<stdio.h>
int sum(int a);
int main()
{
    int i;
    printf("Enter the number =");
    scanf("%d",&i);
    printf("sum= %d",sum(i));
    return 0;
}
int sum(int a)
{
    if(a==0)
    {
      return 0;
    }
    return a+sum(a-1);
}
