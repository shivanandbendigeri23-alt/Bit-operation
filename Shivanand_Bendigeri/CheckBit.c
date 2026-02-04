#include<stdio.h>

int main()
{
    int n,p;

    printf("Enter number: ");
    scanf("%d",&n);

    printf("Enter bit position: ");
    scanf("%d",&p);

    if(n & (1 << p))
        printf("Bit is Set\n");
    else
        printf("Bit is Not Set\n");

    return 0;
}

