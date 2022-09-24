// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{ int n;
printf("enter no.");
   scanf("%d",&n);
   if(n%7==0 ||  n%3==0)
   printf("no. is div by 7 or 3");
   else
    printf("no. is not div by 7 or 3");
    /* code */
    return 0;
}

