// 10. Write a program which takes the cost price and selling price of a product from the 
// user. Now calculate and print profit or loss percentage
#include<stdio.h>
int main()
{
    double s,c,a;
    // double b,c;
    printf("enter selling and cost price : ");
    scanf("%lf %lf",&s,&c);
    a=((s-c)/c)*100;
    
printf("%lf",a);

    /* code */
    return 0;
}

