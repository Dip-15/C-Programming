#include <stdio.h>
int main() {
    int arr[3][2];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Enter the number of student %d in subject %d = ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printpass(arr, 0);
    return 0;
}
void printpass(int arrd[3][2], int n) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("The marks of student %d in subject %d = %d\n", i+1, j+1, arrd[i][j]);
        }
    }
}
