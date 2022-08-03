//5.Write a recursive function to print first N even natural numbers
#include<stdio.h>
void evennatural(int);
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    evennatural(n);
    return 0;
} 
void evennatural(int n)
{
   if(n==0)
   return ;
   evennatural(n-1);
   printf("%d ",2*n);
}