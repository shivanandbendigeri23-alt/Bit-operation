#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    while(b!=0)
    {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }

    printf("Sum = %d\n",a);

    return 0;
}

