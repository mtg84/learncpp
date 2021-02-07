#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ia[5];
    
    // this defines an integer pointer and assigns the addess of the array to the pointer
    int *ip = ia;

    // this assigns the value 2 to the first element of the array
    *ip = 2;

    // this is the operator for incrementing a value.
    // incrementing the pointer will make it point to the second element 
    ++ip;
    // this assigns the value 3 to the second element of the array
    *ip = 3; 

    // this increments the pointer and uses it at the same time
    *(++ip) = 4;

    for (int i : ia)
    {
        printf("%d\n", i);
    }
    

    int initialized[] = {1,2,3};
    initialized[1] = 0;
    for(int i : initialized){
        printf("%d ", i);
    }
    puts("");

    return 0;
}
