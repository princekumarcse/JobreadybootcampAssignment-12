//8.Write a recursive function to print binary of a given decimal number
 #include<stdio.h>
 void binary(int );
 int main()
 {
    int x;
    printf("Ente a number:");
    scanf("%d",&x);
    binary(x);
    return 0;
 }
void binary(int n)
{
    if(n==0)
    return ;
    binary(n/2);
    printf("%d",n%2);
}