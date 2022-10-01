/*Write a recursive function to print first N odd natural numbers in reverse order*/
#include<stdio.h>
void odd(int n)
{ 
    if(n>0)
    {
        printf("%d ",2*n-1);
        odd(n-1);
        
    }
}
void odd(int n);
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    odd(n);
    return 0;
}
