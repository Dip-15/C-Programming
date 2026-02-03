#include<stdio.h>
int main()
{
    int i,n;
    char c;
    float f;
    printf("Enter the value:");
    int j=scanf("%d %d %c %f",&i,&n,&c,&f);
    printf("%d %d %c %.1f\n",i,n,c,f);
    printf("%d\n",j);
    return 0;   
}