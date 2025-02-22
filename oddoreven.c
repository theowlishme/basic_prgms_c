#include<stdio.h>
int main(){
//to chek if a number is odd or even 
//if the number divided by 2 remainder is zero then it is even otherwise odd
  int num;
  printf("enter the number ; ");
  scanf("%d",&num);
  int n=num%2;
  if(n==0)
  {
   printf("%d is even ",num);

  }
  else{
    printf("%d is odd number ",num);

  }
  return 0;
    
} 