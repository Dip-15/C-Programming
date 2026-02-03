#include<stdio.h>
int sum(int a);
int main()
{
    int a;
    printf("Enter the number =");
    scanf("%d",&a);
    printf("The sum of %d is %d",a,sum(a));
    return 0;
}
int sum(int a)
{
    //int s=1;
    if(a==0)
    {
        return 0;
    }
    else if(a==1)
    {
       return 1;
    }
    else
    {
       return a+=sum(a-1);
    }
    return 0;

}
