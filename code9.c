/*Write a recursive function to print octal of a given decimal number*/
#include<stdio.h>
void reverse(int n);
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
void reverse(int n)
{   
    if(n>0)
    {
    reverse(n/8);
    printf("%d",n%8);
    }
}