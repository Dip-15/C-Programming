#include<stdio.h>
float Electricbill(float unit,float cost);
float main()
{
    float unit;
    printf("Enter the value = ");
    scanf("%f",&unit);
    if(unit>50&&unit<=100)
    {
        Electricbill(unit,0.50);
    }
    else if(unit>100&&unit<=200)
    {
        Electricbill(unit,0.75);
    }
    else if(unit>200&&unit<=250)
    {
        Electricbill(unit,1.20);
    }
    else if(unit>250)
    {
        Electricbill(unit,1.50);
    }
    else
    {
        printf("you didn't pay any electric bill");
    }
    return 0;
}
float Electricbill(float unit,float cost)
{
    float c;
    c=unit*cost;
    printf("cost=%f",c);
    return 0;
}
