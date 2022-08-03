//6.Write a recursive function to print first N even natural numbers in reverse order.
#include<stdio.h>
void evennatural(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    evennatural(n);
    return 0;

} 
void evennatural(int n)
{
    if(n==0)
    return ;
    printf("%d ",2*n);
    evennatural(n-1);
}