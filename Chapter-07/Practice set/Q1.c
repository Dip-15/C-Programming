#include<stdio.h>
int  main()
{
    /*int arr[10]={10,20,30,40,50,60,70,80,90,10};
    int *ptr=&arr[0];
    ptr=ptr+2;
    printf("The value of third element of this arr is = %d",*ptr);*/
    int arr[10];
    int *ptr=&arr[0];
    ptr=ptr+2;
    if(ptr==&arr[2])
    {
        printf("This is a same address.");
    }
    else
    {
        printf("This is't a same address.");
    }
    return 0;
}
