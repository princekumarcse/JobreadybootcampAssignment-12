//3.Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void oddnatural(int );
int main()
{
  int n;
  printf("Enter a Number:\n");
  scanf("%d",&n);
  oddnatural(n);
  return 0;
} 
void oddnatural(int n)
{
    if(n==0)
    return ;
    oddnatural(n-1);
    printf("%d ",2*n-1);
}