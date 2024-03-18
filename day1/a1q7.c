/*
Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values
If user enters a 4 digit number 9361 output should be
a. 9
3
6
1
b. 9361 = 9 000 + 300 + 60 + 9
c. 1639  
*/  

#include<stdio.h>
int main()
{
int num;
 printf("Enter any four digit number: \n");
 scanf("%d",&num);
 printf("The face value of each digit is :\n");
 int temp,temp1=0,i=0;
 while(num!=0)
 {
  temp=num;
  printf("%d\n",temp%10);
  temp1=temp1+(temp%10)*(10**i);
  num=num/10;
 }
 printf("The number in reverse order is :%d\n",temp1);

 return 0;
}

 
