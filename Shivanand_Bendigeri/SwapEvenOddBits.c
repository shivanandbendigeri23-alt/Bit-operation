#include<stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    int even = n & 0xAAAAAAAA;
    int odd  = n & 0x55555555;

    even >>= 1;
    odd <<= 1;

    n = even | odd;

    printf("Result = %d\n",n);

    return 0;
}

