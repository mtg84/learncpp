/*This is from C Essential training tutorial by Dan Gookin*/

#include <stdio.h>

#define GREETING "This is from C Essential Training"


int main(int argc, char const *argv[])
{
    int a, b;

    puts(GREETING);

    printf("Type a positive value: ");

    scanf("%d", &b);

    for ( a = 0; a < b; a++)
    {

        printf("%d: I must do this %d times but I stop at %d \n", a, b, a);

        if(a == 9){break;}
    }
    

    return 0;
}
