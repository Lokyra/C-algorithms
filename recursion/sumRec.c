#include <stdio.h>


int sum(int n)
{
    if (n == 0) 
        return 0;

    return n + sum(n - 1);
}


int main()
{
    int r;
    r = sum(5);
    printf("%d\n", r);
    return 0;
}
