#include<stdio.h>
int main()
{
    int arr[2][3][4]={
                      {{10, 20, 30, 40},
                       {50, 60, 70, 80},
                       {90, 20, 80, 75}},
                      {{15, 25, 35, 45},
                       {55, 65, 75, 85},
                       {95, 25, 85, 70}}
                      };
    for(int i=0;i<2;i++)
    {
         for(int j=0;j<3;j++)
         {
              for(int k=0;k<4;k++)
              {
                  printf("Address:arr[%d][%d][%d] is Value =%d\n",i,j,k,arr[i][j][k]);
              }
         }
    }
    return 0;
}
