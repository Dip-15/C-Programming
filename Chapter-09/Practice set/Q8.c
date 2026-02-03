#include<stdio.h>
#include<string.h>
struct customer
{
    char name[50];
    int adh_no;
    int bank_no;
    float balance;
    float cradite;
    int withdrawl;
    float unclr;
};
int pass(float i,float j)
{
    float k=i+j;
    return k;
}
int main()
{
    struct customer c1;
    strcpy(c1.name,"Krishna");
    c1.adh_no=17700;
    c1.bank_no=12045;
    c1.balance=15000;
    c1.cradite=2000;
    float i=pass(c1.balance,c1.cradite);
    c1.withdrawl=5000;
    c1.unclr=i-c1.withdrawl;
    printf("The Name of the customer :%s\n",c1.name);
    printf("The Adhar Number of the customer :%d\n",c1.adh_no);
    printf("The Account Number of the customer :%d\n",c1.bank_no);
    printf("Balance:%.2f\n",c1.balance);
    printf("Credite:%.2f\n",c1.cradite);
    printf("Withdrawl:%.2d\n",c1.withdrawl);
    printf("Unclr Balance:%.2f\n",c1.unclr);
    return 0;

}
