//2.Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void Rnatural(int);
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    Rnatural(n);
    return 0;
} 
void Rnatural(int n)
{
    if(n==0)
    return;
    printf("%d ",n);
    Rnatural(n-1);
}