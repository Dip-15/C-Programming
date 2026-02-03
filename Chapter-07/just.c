#include <stdio.h>
int main() {
    int ROWS =2;
    int COLS =3;
    int arr[ROWS][COLS];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    takeInput(arr,12);
    return 0;
}
void takeInput(int arr[ROWS][COLS],int n)
{
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
