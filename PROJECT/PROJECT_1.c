#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguess=0;
    srand(time(0));
    number = rand()%100+1;
    //printf("the number is %d",number);
    do
    {
        printf("Enter the number 1 to 100:");
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
             printf("You guess it just %d attempt!",nguess);
        }
        nguess++;
    }
    while(guess!=number);
    return 0;

}
