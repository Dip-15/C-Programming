#include<stdio.h>
void slice(char*st,int m,int n)
{
    int i=0;
    while((i+m)<n)
    {
        st[i]=st[i+m];
        i++;
    }
    st[i]='\0';
}
int main()
{
    char str[]="Ramkrishna";
    slice(str,1,5);
    printf("The slice is %s",str);
    return 0;

}
