// Single line comment

/*
This
is
a 
multiline
comment
*/

// the include directive instructs the preprocessor to include another file to pass to the compiler
// this includes the C Standard IO header file
#include <cstdio>

// int argc is an integer representing the number of command line arguments
// char const *argv[] or char **argv is an array of character arrays
int main(int argc, char const *argv[])
{
    puts("Hi, you are too lazy to type hello");
    
    /*  the main function must return an integer value: 
        (0 is normally returned to indicate the programm exited normaly)
        (1 is returned to indicate an error condition )
    */
    return 0;
}
