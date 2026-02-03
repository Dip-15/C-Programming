#include<stdio.h>
int main()
{
    int x;
    printf("Enter the ratting:");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("your ratting is 1");
        break;
    case 2:
        printf("your ratting is 2");
        break;
    case 3:
        printf("your ratting is 3");
        break;
    case 4:
        printf("your ratting is 4");
        break;
    case 5:
        printf("your ratting is 5");
        break;
    default:
        printf("your ratting is not valid");
        //break;
        }
        return 0;
}
