#include<stdio.h>
int Sum(int a,int b);
int main()
{

    Sum(1,10);//this c is different and it's for this main function

    return 0;

}
int Sum(int a,int b)
{
    int c;//this c is different and it's for this function definition
    c=a+b;
    printf("THe sum of tow number is =%d",c);
    return 0;
}

