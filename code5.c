/*Write a recursive function to print first N even natural numbers*/
#include<stdio.h>
void even(int n)
{
    if(n>0)
    {
    even(n-1);
    printf("%d ",2*n);
    }
}
void even(int n);
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    even(n);
    return 0;
}
