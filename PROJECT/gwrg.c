#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int guess,number,nguess=1;
    srand(time(0));
    number=rand()%100+1;
    printf("%d",number);
    do
    {
        printf("Enter the guess 0 to 100:");
        scanf("%d",&guess);
        if(guess>number)
        {
              printf("Lower number please\n");
        }
        else if(guess<number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("you guess it just %d attmpt!",nguess);
        }
        nguess++;
    }
    while(guess!=number);
    return 0;


}
