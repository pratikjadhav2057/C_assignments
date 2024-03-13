/*
Print the ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value.
*/ 

#include<stdio.h>
int main()
{
 char a;
 printf("enter any a-z or A-Z character:\n");
 scanf("%c",&a);
 printf("The ascii value of character in decimal is :%d\n",a);
 printf("The ascii value of character in hex format is :%x\n",a);
 printf("The ascii value of character in octal foramt is :%o\n",a);
 printf("enter any number to find its character: \n");
 int b;
 scanf("%d",&b);
 printf("The character for entered value is: %c\n",b);

}

