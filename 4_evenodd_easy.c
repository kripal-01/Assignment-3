
// 4. Write a program to check whether a given number is an even number or an odd 
// number without using % operator


#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    a&1==1? printf("odd"):printf("even");
    // if(a&1==1)
    // printf("odd");
    // else
    // printf("even");
    /* code */
    return 0;
}