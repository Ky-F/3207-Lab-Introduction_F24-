#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar()
{
    int numAlpha = rand() % 26; //Creates a random int from 0-25
    
    
    if (numAlpha == 0){
        return 'a';
    } if (numAlpha == 1){
        return 'b';
    } if (numAlpha == 2){
        return 'c';
    } if (numAlpha == 3){
        return 'd';
    } if (numAlpha == 4){
        return 'e';
    } if (numAlpha == 5){
        return 'f';
    } if (numAlpha == 6){
        return 'g';
    } if (numAlpha == 7){
        return 'h';
    } if (numAlpha == 8){
        return 'i';
    } if (numAlpha == 9){
        return 'j';
    } if (numAlpha == 10){
        return 'k';
    } if (numAlpha == 11){
        return 'l';
    } if (numAlpha == 12){
        return 'm';
    } if (numAlpha == 13){
        return 'n';
    } if (numAlpha == 14){
        return 'o';
    } if (numAlpha == 15){
        return 'p';
    } if (numAlpha == 16){
        return 'q';
    } if (numAlpha == 17){
        return 'r';
    } if (numAlpha == 18){
        return 's';
    } if (numAlpha == 19){
        return 't';
    } if (numAlpha == 20){
        return 'u';
    } if (numAlpha == 21){
        return 'v';
    } if (numAlpha == 22){
        return 'w';
    } if (numAlpha == 23){
        return 'x';
    } if (numAlpha == 24){
        return 'y';
    } if (numAlpha == 25){
        return 'z';
    } //Returns the selected characters
}