#include<stdio.h>
typedef struct datetime
{
    int date;
    int month;
    int year;
    int hour;
    int min;
    int sec;
}time;
void display(time t,int i)
{
    printf("Date & Time%d = %d/%d/%d %d:%d:%d\n",i,t.date,t.month,t.year,t.hour,t.min,t.sec);
}
int compare(time t1,time t2)
{
    if(t1.year>t2.year)
    {
        return 1;
    }
    if(t1.year<t2.year)
    {
        return -1;
    }
    if(t1.month>t2.month)
    {
        return 1;
    }
    if(t1.month<t2.month)
    {
        return -1;
    }
    if(t1.date>t2.date)
    {
        return 1;
    }
    if(t1.date<t2.date)
    {
        return -1;
    }
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
    time t1={15,2,2003,15,30,50};
    time t2={15,2,2003,15,30,50};
    display(t1,1);
    display(t2,2);
    int a=compare(t1,t2);
    printf("The Date & Time is %d",a);

}
