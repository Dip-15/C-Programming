#include <stdio.h>
int main()
{
    FILE *ptr;
    int i;
    ptr = fopen("Q5.txt", "r");
    fscanf(ptr,"%d",&i);
    ptr = fopen("Q5.txt", "w");
    fprintf(ptr, "%d", i*2);
    fclose(ptr);
    return 0;
}

