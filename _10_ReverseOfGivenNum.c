//10.Write a recursive function to print reverse of a given number 
#include<stdio.h>
void reverse(int);
int main()
{
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    reverse(x);
    return 0;
}
void reverse(int n)
{
  if(n==0)
  return ;
  printf("%d",n%10);
  reverse(n/10);
}