#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a=4,b=7;
    printf("The value of a and b is before change %d and %d\n",a,b);
    printf("The sum of a and b is = %d\n",sum(a,b));
    printf("The value of a and b is after change %d and %d\n",a,b);
    return 0;

}
int sum(int a,int b)
{
    int c=a+b;
    a=100;
    b=200;
    return c,a,b;
}
//To clarify, the return c,a,b; statement will ultimately return the value of b due to how the comma operator works.
//The sum function is called with a and b as arguments.Inside sum,the calculation a+b (which would be 11) is performed and stored in c.
//However,due to the return statement's misuse of the comma operator,
//The function ends up returning 200 bez,b value is last assign by the return statements in line no.17.
//Here line no.8 is can't change the values.

