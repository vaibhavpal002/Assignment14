/*Write a recursive function to print first N natural numbers in reverse order*/
#include<stdio.h>
void natural(int n)
{
    if(n>0)
    {
    printf("%d ",n);
    natural(n-1);
    }
}
void natural(int n);
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    natural(n);
    return 0;
}