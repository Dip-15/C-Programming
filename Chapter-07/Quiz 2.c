#include<stdio.h>
int main()
{
    int student=3;
    int subject=4;
    int arr[3][4];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("Enter the marks of student %d in subject %d = ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    pass(arr,12);

}
void pass(int marks[3][4],int n)
{
    int *ptr = marks;
    for(int i =0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%d\t",marks[i][j]);
            ptr++;

        }
         printf("\n");
    }
}
