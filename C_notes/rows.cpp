/*This is from C Essential training tutorial by Dan Gookin*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int rows;
    char letters[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    /* get input */
    printf("Type a positive value: ");
    scanf("%d", &rows);

    /* verify input*/

    /* avoid out of range values */

    /* proccess the rows */    
    for(int i = 0; i<rows; i++){

        for(int j = 0; j < 10; j++){
            printf("%d%c\t",i,letters[j]);     
        }
        
        printf("\n");
        
        for(int j = 0; j < 10; j++){
            printf("=\t");     
        }
    
        printf("\n");
    }


    return 0;
}

