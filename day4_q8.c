//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main()
{
    int n;
    printf("enter n :\n");
    scanf("%d",&n);
    int sum = n*(n+1)/2;
    printf("sum of first %d natural numbers is %d\n",n,sum);
    return 0;
}