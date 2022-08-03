//1.Write a recursive function to print first N natural numbers
#include<stdio.h>
void Nnatural(int );
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    Nnatural(n);
    return 0;
} 
void Nnatural(int n)
{
    if(n==0)
    return;
    Nnatural(n-1);
     printf("%d ",n);
}