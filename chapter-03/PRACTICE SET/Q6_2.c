#include<stdio.h>
int main()
{
    int first,second,third, fourth;
    printf("Enter the first number:");
    scanf("%d",&first);
    printf("Enter the second number:");
    scanf("%d",&second);
    printf("Enter the third number:");
    scanf("%d",&third);
    printf("Enter the four number:");
    scanf("%d",&fourth);
    if(first>second)
    {
        if(first>third)
        {
            if(first>fourth)
            {
                printf("%d is greatest",first);
            }
            else
            {
                printf("%d is greatest",fourth);
            }
        }

    }
    else if(second>third)
    {
       if(second>fourth)
       {
        printf("%d is greatest",second);
       }
       else
       {
           printf("%d is greatest",fourth);
       }
    }
    else if(third>fourth)
    {
        printf("%d is greatest",third);
    }
    else
    {
        printf("%d is greatest",fourth);
    }
    return 0;
}
