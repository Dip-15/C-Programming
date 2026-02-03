#include<stdio.h>
#include<string.h>
int main()
{
     const char *source="ram";
    char target[30];
    strcpy(target,source);
    printf("Now the value of target= %S",target);
    return 0;
}

