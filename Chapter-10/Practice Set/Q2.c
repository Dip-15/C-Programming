#include<stdio.h>
int main ()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    FILE *ptr;
    ptr = fopen("Q2.txt", "w");
    fprintf(ptr, "The multiplication table of %d\n", a);
    for(int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d * %d = %d\n", a, i + 1, a * (i + 1));
    }
    fclose(ptr);
    printf("The Multiplication table of number %d is completed for Q2.txt file",a);
    return 0;
}
