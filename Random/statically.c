#include<stdio.h>
int x,y;
void p(int n){
    x=(n+2)/(n-3);
}
void Q(){
    //int x,y;
    x=3;y=4;
    p(y);
    printf("%d\n",x);
}
void main(){
    x=7;y=8;
    Q();
    printf("%d\n",x);
}