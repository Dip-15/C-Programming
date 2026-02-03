#include<stdio.h>
typedef struct time
{
    int hour;
    int min;
    int sec;
}time;
void display(time t,int i)
{
    printf("Time%d = %d:%d:%d\n",i,t.hour,t.min,t.sec);
}
int compare(time t1,time t2)
{
    if(t1.hour>t2.hour)
    {
        return 1;
    }
    if(t1.hour<t2.hour)
    {
        return -1;
    }
    if(t1.min>t2.min)
    {
        return 1;
    }
    if(t1.min<t2.min)
    {
        return -1;
    }
    if(t1.sec>t2.sec)
    {
        return 1;
    }
    if(t1.sec<t2.sec)
    {
        return -1;
    }
    return 0;
}
int main()
{
    time t1={15,30,00};
    time t2={14,30,60};
    display(t1,1);
    display(t2,2);
    int a=compare(t1,t2);
    printf("The time is %d",a);

}

