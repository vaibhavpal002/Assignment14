/*Write a recursive function to print reverse of a given number*/
#include<stdio.h>
void reverse(int n)
{
    if(n>=1)
    {
    printf("%d",n%10);
    reverse(n/10);
    }
}
void reverse(int n);

void reverse(int n);
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    reverse(n);
    return 0;
}