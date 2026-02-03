#include<stdio.h>
#include<string.h>
struct vector
{
    int x;
    int y;
};
int main()
{
    struct vector v1,v2;
    v1.x= 32;
    v1.y= 45;
    printf("The value of vector v1.x= %d and v1.y = %d\n",v1.x,v1.y);
    v2.x= 30;
    v2.y= 50;
    printf("The value of vector v2.x= %d and v2.y = %d\n",v2.x,v2.y);
    return 0;
}
