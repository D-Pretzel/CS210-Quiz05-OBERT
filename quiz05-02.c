/** quiz05-02.c
* ===========================================================
*    Name: David Petzold
* Section: T 6/7
* Purpose: Quiz 5
* ===========================================================
*/

#include <stdio.h>

int main(void){

    char inputCardRank = ' ';
    printf("enter rank of a playing card 1 2 3 4 ... 8 9 T J Q K A: ");
    scanf(" %c", &inputCardRank);

    // YOUR CODE GOES HERE
    switch (inputCardRank) {
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case 'T':
        case 'A':
            printf("the card is NOT a face card\n");
            break;
        case 'K':
        case 'Q':
        case 'J':
            printf("the card is a face card\n");
            break;
        default:
            printf("that is not a card rank\n");
    }
    printf("done\n\n"); // leave this here

    return 0;
}