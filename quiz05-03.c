/** quiz05-03.c
* ===========================================================
*    Name: David Petzold
* Section: T 6/7
* Purpose: Quiz 5
* ===========================================================
*/

#include <stdio.h>

int main(void){

    int sideLength = 0;
    printf("enter the size: ");
    scanf("%i", &sideLength);

    // YOUR CODE GOES HERE
    for (int i = 0; i < sideLength; i++){
        for (int j = 0; j < sideLength * 3; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("done\n\n"); // leave this here
    return 0;
}