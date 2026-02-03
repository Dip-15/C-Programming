#include<stdio.h>
#include<string.h>
struct book
{
    int page;
    float price;
    char name[10];
};
int main()
{
    struct book b1;
    struct book *ptr=&b1;
    printf("Enter the page of Book:");
    scanf("%d",&ptr->page);
    printf("Enter the price of Book:");
    scanf("%f",&ptr->price);
    printf("Enter the name of Book:");
    scanf("%s",ptr->name);
    printf("page= %d\n",b1.page);
    printf("price= %f\n",b1.price);
    printf("name= %s\n",b1.name);
    return 0;
}
