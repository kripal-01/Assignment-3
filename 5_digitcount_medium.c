// 5. Write a program to check whether a given number is a three-digit number or not
#include<stdio.h>
int main()
{
    int a,b;
    printf("write no.");
    scanf("%d",&a);
    a/100>=1&&a/100<=9?printf("no. is 3 digit"):printf("no. is  not a 3 digit");
//    a/=100;
//    if(a>=1 && a<=9)
//    printf("no. is 3 digit");
//else
// printf("no. is  not a 3 digit");
    // int count=0;
    // while(a!=0){
    //     int digit = a%10;
    //      count++;
    //      a=a/10;
    // }
    // if(count==3){
    //      printf("no. is three digit no");
    // }
    // else{
    //     printf("no. is not a three digit no");
    // }
    /* code */
    return 0;
}

