#include<stdio.h>

int main()
{
    int n,d;

    printf("Enter number: ");
    scanf("%d",&n);

    printf("Enter rotate bits: ");
    scanf("%d",&d);

    int result = (n << d) | (n >> (32-d));

    printf("Result = %d\n",result);

    return 0;
}

