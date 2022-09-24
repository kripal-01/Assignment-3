// Write a program to check whether a given year is a leap year or not
// for century year 400 divide give int. then it is leap
#include<stdio.h>
int main()
{
    int n;
    printf("enter year  ");
    scanf("%d",&n);
 n%100==0?n%400==0?printf("leap"):printf("not leap"):n%4==0?printf("leap"):printf("not leap");
//     if(n%100==0){
//         if(n%400==0)
//         printf("leap");
//         else
//         printf("not leap");
//     }
// else
//    { if(n%4==0)
//     printf("year is leap");
//     else
//     printf("not leap");}
//     /* code */
    return 0;
}


