//  Write a program which takes the month number as an input and display number of 
// days in that month
#include<stdio.h>
int main()
{ int n;
printf("enter month no.");
scanf("%d",&n);
if ((n==1)||(n==3)||(n==5)||(n==7)||(n==8)||(n==10)||(n==12))
{
    printf("31 days");
    /* code */
}
else if ((n==4)||(n==6)||(n==9)||(n==11))
{
     printf("30 days");
    /* code */
}
else if (n==2)
{   int n;
    printf("enter year");
    scanf("%d",&n);
     n%100==0?n%400==0?printf("leap-29 day"):printf("not leap-28 days"):n%4==0?printf("leap-29"):printf("not leap-28");
    /* code */
}
else
{ 
printf("month not exist");
    /* code */
}

    return 0;
}
