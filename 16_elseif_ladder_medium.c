
// Write a program to check whether a given character is an alphabet (uppercase), an 
// alphabet (lower case), a digit or a special character
#include<stdio.h>
int main()
{
char n;
printf("enter alphabet or no.or special charcter:   ");
scanf("%c",&n);
if (n>='A'&&n<='Z')
{
    printf("alphabet uppercase");
    /* code */
}
else if (n>='a'&&n<='b')
{
    printf(" alphabet lowercase");
    /* code */
}
else if (n>='0'&&n<='9')
{
    printf("digit");
    /* code */
}
else
{
    printf("special character");
}



    /* code */
    return 0;
}