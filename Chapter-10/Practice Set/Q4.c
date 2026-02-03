#include<stdio.h>
int main()
{
    char name[2][30];
    int salary[2];
    for(int i=0;i<2;i++)
    {
        printf("Enter the Name%d:",i+1);
        scanf("%s",&name[i]);
        printf("Enter the Salary%d:",i+1);
        scanf("%d",&salary[i]);
        printf("\n");
    }
    FILE*ptr;
    ptr=fopen("Q4.txt","w");
    for(int j=0;j<2;j++)
    {
        fprintf(ptr,"%s , ",name[j]);
        fprintf(ptr,"%d",salary[j]);
        fprintf(ptr,"\n");
    }
    fclose(ptr);
    return 0;
}
