//4.Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void Roddnatural(int ) ;
int main()
{
    int n;
    printf("Enter A number:\n");
    scanf("%d",&n);
    Roddnatural(n);
    return 0;
}
void Roddnatural(int n)
{
  if(n==0)
  return ;
  printf("%d ",2*n-1);
  Roddnatural(n-1);
}