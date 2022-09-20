/** quiz05-01.c
* ===========================================================
*    Name: David Petzold
* Section: T 6/7
* Purpose: Quiz 5
* ===========================================================
*/

#include <stdio.h>

int main(void){

    int firstNum = 0;
    int lastNum = 0;

    printf("enter the first number: ");
    scanf("%i", &firstNum);
    printf("enter the last number: ");
    scanf("%i", &lastNum);

    // YOUR CODE GOES HERE
    if (firstNum > lastNum){
        printf("%d ", firstNum);
    }

    while (firstNum <= lastNum)
    {
        printf("%i ", firstNum);
        firstNum += 3;
    }

    printf("done\n\n"); // leave this here
    return 0;
}