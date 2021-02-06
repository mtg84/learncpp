#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 10;

    int * ip = &x;

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    x = 73;
    printf("The value of *ip is %d\n", *ip);

    ip = &y;
    printf("The value of *ip is %d\n", *ip);

    return 0;
}
