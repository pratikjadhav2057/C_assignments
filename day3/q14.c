/*

Write a program to accept a number and check whether it is Prime no. 
*/
#include<stdio.h>
int main()
{
  int num,flag=0;
  printf("put any number: ");
  scanf("%d",&num);
  for(int i=2;i<=(num/2);i++)
  {
    if(num%i==0)
	flag=1;
  }
  if(flag==0)
  printf("\nthis is a prime number\n");
  else
  printf("\n this is not prime \n ");
}
