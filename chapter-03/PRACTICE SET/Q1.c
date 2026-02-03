#include<stdio.h>
int main()
{
    int M;
    printf("Enter the Marks:");
    scanf("%d",&M);
    switch(M/10)
    {
    case 10:
        printf("AA++");
        break;
    case 9:
        printf("AA+");
        break;
    case 8:
        printf("A+");
        break;
    case 7:
        printf("A");
        break;
    case 6:
        printf("B+");
        break;
    case 5:
        printf("B");
        break;
    case 4:
        printf("C+");
        break;
    case 3:
        printf("c");
        break;
    default:
        printf("Fail");
    }

    return 0;
}
