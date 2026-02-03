#include<stdio.h>
int main()
{
    int num[4];
    int *ptr;
   //ptr=&num[0];
    ptr=num;
    int i;
    for(i=0;i<4;i++)
    {
        printf("Enter the number of student %d:",i+1);
        scanf("%d",ptr);
        ptr++;

    }
    for(i=0;i<4;i++)
    {
        printf("The number of student%d = %d\n",i+1,num[i]);
    }
    return 0;
}
