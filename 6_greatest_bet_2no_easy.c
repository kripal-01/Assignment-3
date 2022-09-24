// 6. Write a program to print greater between two numbers. 
//Print one number of both are the same.
#include<stdio.h>
int main()
{
    int a,b;
    printf("write two no.");
    scanf("%d %d",&a,&b);
    int c=a>=b?a:b;
    printf(" greatest no. is %d",c);
//    a>=b?printf("greater no. is %d",a):printf("greatest no. is %d",b);
    // if (a>=b)
    // {
    //   printf("greater no. is %d",a);
    //     /* code */
    // }
    // else
    // printf("greatest no. is %d",b);
    
    /* code */
    return 0;
}

