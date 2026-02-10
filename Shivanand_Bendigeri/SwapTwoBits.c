#include<stdio.h>

int main()
{
    int n,p1,p2;

    printf("Enter number: ");
    scanf("%d",&n);

    printf("Enter two positions: ");
    scanf("%d %d",&p1,&p2);

    int bit1 = (n >> p1) & 1;
    int bit2 = (n >> p2) & 1;

    if(bit1 != bit2)
        n = n ^ ((1 << p1) | (1 << p2));

    printf("Result = %d\n",n);

    return 0;
}

