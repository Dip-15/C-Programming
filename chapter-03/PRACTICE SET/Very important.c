#include<stdio.h>
int main()
{
    int age,VIP;// VIP=1;
    printf("Enter your age:");
    scanf("%d",&age);
    //if((age>=18&&age<=75)||(VIP==age))//VIP means VIP=0
    //if((age>=18&&age<=75)||(VIP==age))
    if((age>=18&&age<=75)||(VIP=1))//
    {
        printf("You can drive\n");
    }
    else
    {
        printf("You can't drive\n");
    }

    if((age>=18&&age<=75)||(VIP==1))
        //VIP==1 is true value of any age like 1,0 and 76 bez 1==1 after the execute line VIP=1 under the if statement.
    {
        printf("You can drive\n");
    }
    else
    {
        printf("You can't drive\n");
    }


    return 0;
}
