#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
        This defines the name and the type of the varibale 
        and it allocates space of a size sufficient
    */
    int i;
    
    /*  
        This is called  initializing the variable.
        Now it has a value assigned and it is no longer undefined
        It is dangerous to leave undefined variables
    */ 
    int i = 7; 

    const int j = 5; //with const it becomes a read-only or inmutable variable

    printf("The value of i is %d\n", i);
    printf("The value of j is %d\n", j);

    return 0;
}
