/* 
Write a program to accept integer values of base and index and calculate power of base to 
*/

#include<stdio.h>
int main()
{
  int base,index,num=1;
  printf("put base and index value ");
  scanf("%d%d",&base,&index);
  for(int p=1;p<=index;p++)
  {
    num=num*base;
  }
  printf("the final value is: %d",num);
}
