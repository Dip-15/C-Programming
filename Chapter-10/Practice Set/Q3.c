#include<stdio.h>
int main()
{
    FILE*ptr1;
    FILE*ptr3;
    FILE*ptr2;
    ptr1=fopen("Q3_1.txt","r");
    ptr3=fopen("Q3_1.txt","r");
    ptr2=fopen("Q3_2.txt","w");
    char c=fgetc(ptr1);
    while(c!=EOF)
    {
        fputc(c,ptr2);
        //fputc(c,ptr2);
        c=fgetc(ptr1);
    }
    c=fgetc(ptr3);
    if(c==EOF)
    {
        printf("Yes");
    }
    while(c!=EOF)
    {
        fputc(c,ptr2);
        //fputc(c,ptr2);
        c=fgetc(ptr3);
    }
    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr2);
    return 0;
}
