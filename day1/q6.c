/*
Write a program to accept an integer value and print its table.
*/
#include<stdio.h>
int main()
{
 int num;
 printf("Enter any number to form its table:");
 scanf("%d",&num);
 for(int i=1;i<=10;i++)
 
  printf("%d * %d = %d \n",i,num,i*num);
}

