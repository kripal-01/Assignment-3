// 7. Write a program to check whether roots of a given quadratic equation are real & 
// distinct, real & equal or imaginary root

#include<stdio.h>
int main()
{ int a,b,c,d;
    printf("enter  the value of b,a,c  ");
    scanf("%d %d %d",&b,&a,&c);
   d=b*b-4*a*c;
   if(d>0)
   printf("roots are real and distint");

  
    else if(d<0)
   printf("roots are imaginarry");

    else
   printf("roots are real and equal");
    /* code */
    return 0;
}

