#include <stdio.h>

int fib(int num);

int main()
{
    // int fff;
    // fff = fib(40);
    // printf("%d",fff);
    int a[40];
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i < 39; i++)
    {
        /* code */
        a[i] = a[i-2] + a[i-1];
        printf("\t%d",a[i]);
    }
    
    return 0;
}

int fib(int num)
{
    if(num == 0)
        return 0;
    if(num == 1)
        return 1;
    if(num > 1)
        return fib(num-2)+fib(num-1);
}