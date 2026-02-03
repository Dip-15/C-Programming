#include<stdio.h>
int main()
{
    int score;
    printf("Enter the score under(0-100:\n");
    scanf("%d",&score);
    if(score>100)
    {
    printf("It's not valid input");
    }
    else
    {
        switch(score/10)
        {
        case 10:
            printf("AA+");
            break;
        case 9:
            printf("A+");
            break;
        case 8:
            printf("A");
            break;
        case 7:
            printf("B+");
            break;
        case 6:
            printf("B");
            break;
        case 5:
            printf("c");
            break;
        case 4:
            printf("D");
            break;
        default :
            printf("F");
            break;
        }
    }
    return 0;
}
