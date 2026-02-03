#include<stdio.h>
int main()
{
    int marks[5];
    printf("Enter the marks for student 1:");
    scanf("%d",&marks[0]);
    printf("Enter the marks for student 2:");
    scanf("%d",&marks[1]);
    printf("Enter the marks for student 3:");
    scanf("%d",&marks[2]);
    printf("Enter the marks for student 4:");
    scanf("%d",&marks[3]);
    printf("Enter the marks for student 5:");
    scanf("%d",&marks[4]);
    printf("student 1 = %d,student 2 = %d,student 3 = %d,student 4 = %d,student 5 = %d",marks[0],marks[1],marks[2],marks[3],marks[4]);
    return 0;
}
