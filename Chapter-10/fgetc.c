#include<stdio.h>
int main()
{
    FILE*ptr;
    ptr=fopen("fget.txt","r");
    //char c = fgetc(ptr);
    printf("The value of my char %c\n",fgetc(ptr));
    printf("The value of my char %c\n",fgetc(ptr));
    printf("The value of my char %c\n",fgetc(ptr));
    printf("The value of my char %c\n",fgetc(ptr));
    printf("The value of my char %c\n",fgetc(ptr));
    fclose(ptr);
    return 0;

}
