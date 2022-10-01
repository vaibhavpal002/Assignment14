/*Write a recursive function to print first N natural numbers*/
#include<stdio.h>
void natural(int n)
{
    if(n>0)
    {
    natural(n-1);
    printf("%d ",n);
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