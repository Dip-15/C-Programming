#include<stdio.h>
int main()
{
    FILE*fptr;
    int number=15;
    fptr=fopen("File write.txt","w");
    fprintf(fptr,"The number is %d\n",number);
    fprintf(fptr,"Krishna prioshi Radharani\n");
    fprintf(fptr,"Ooo Krishna now it's working very well\n");
    fclose(fptr);
    return 0;

}
