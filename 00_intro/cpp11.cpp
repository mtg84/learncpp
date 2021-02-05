// cpp11.cpp by Bill Weinman <http://bw.org/>
// test for modern C++ compiler
// updated 2020-06-24
#include <cstdio>

int main()
{
   int version = 2;
    int ia[] = { 1, 2, 3, 4, 5 };
    for( auto i : ia ) {
        printf("i is %d\n", i);
    }

    printf("Version is %d\n", version);
  
    return 0;
}


