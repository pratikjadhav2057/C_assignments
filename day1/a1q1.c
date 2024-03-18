/*Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results. */ 

#include<stdio.h>
int main()
{
 int a;
 int b;
 scanf("%d%d",&a,&b);
 printf("sum of above two numbers is :%d \n",a+b );
 printf("difference of above two numbers is : %d\n", a-b);
 printf("product of above two numbers is : %d\n", a*b);
 return 0;
}
