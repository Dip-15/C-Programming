#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>=18 && a<=70){
        printf("you can drive");
    }
    else{printf("you can't drive");
    }
    return 0;
}
