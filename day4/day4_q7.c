//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main()
{
    int a;
    printf("enter a \n");
    scanf("%d",&a);
    int b;
    printf("enter b \n");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a=%d b=%d",a,b);
    return 0;

}
