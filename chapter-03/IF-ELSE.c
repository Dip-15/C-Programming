#include<stdio.h>
int main()
    {
    //PROGRAM TO FIND  THE GREATEST NUMBER AMONG THREE NUMBER
    int _1st, _2nd, _3rd;
    printf("Enter 1st number:");
    scanf("%d",& _1st);
    printf("Enter 2nd number:");
    scanf("%d",& _2nd );
    printf("Enter 3rd number:");
    scanf("%d",& _3rd);
    if(_1st>_2nd&&_1st>_3rd)
    {
        printf("Greatest number = %d",_1st);
    }
    else
    {
        if(_2nd > _3rd)
        {
            printf("Greatest number = %d",_2nd);
        }
        else
        {
             printf("Greatest number = %d",_3rd);
        }
    }
  return 0;
}
