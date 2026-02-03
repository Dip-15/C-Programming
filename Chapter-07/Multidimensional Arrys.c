#include<stdio.h>
int main()
{
    int n_student=3;
    int n_subject=4;
    int arr[3][4];
    for(int i=0;i<n_student;i++)
    {
        for(int j=0;j<n_subject;j++)
        {
            printf("Enter the Marks of Student %d in Subject %d = ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n_student;i++)
    {
        for(int j=0;j<n_subject;j++)
        {
            printf("The Marks of Student %d in Subject %d = %d\n",i+1,j+1,arr[i][j]);

        }
    }
    return 0;
}

