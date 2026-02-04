#include<stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    if(n & 1)
        printf("Odd Number\n");
    else
        printf("Even Number\n");

    return 0;
}

