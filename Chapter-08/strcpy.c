#include<stdio.h>
#include<string.h>
int main()
{
    char source[]="Krishna";
    char target[30];
    strcpy(target,source);
    printf("Now the value of target= %s",target);
    return 0;
}
