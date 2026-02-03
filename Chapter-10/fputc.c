#include<stdio.h>
int main()
{
    FILE*ptr;
    ptr=fopen("fputc.txt","w");
    fputc('t',ptr);
    fputc('h',ptr);
    fputc('i',ptr);
    fputc('s',ptr);
    fclose(ptr);
    return 0;
}
