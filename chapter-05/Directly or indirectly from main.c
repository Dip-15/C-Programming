#include<stdio.h>
void goodmorning();
void goodaffternoon();
void goodnight();
int main()
{
    goodmorning();
    return 0;
}
void goodmorning()
{
    printf("good morning dip\n");
    goodafternoon();
}
void goodafternoon()
{
  printf("good afternoon dip\n");
  goodnight();
}
void goodnight()
{
    printf("good night dip\n");
}

