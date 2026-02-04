#include<stdio.h>

int main()
{
    int n,p;

    printf("Enter number: ");
    scanf("%d",&n);

    printf("Enter bit position: ");
    scanf("%d",&p);

    n = n ^ (1 << p);

    printf("Result = %d\n",n);

    return 0;
}

