#include <stdio.h>

void calculateCharacterCase(int Character);

int main(){

    int Character;

    printf("Enter a number(1 is lowercase ( a to z ) or 2 is uppercase ( A to Z )): ");
    scanf("%d", &Character);

    calculateCharacterCase(Character);

    return 0;
}

void calculateCharacterCase(int Character){
    if(Character == 1){
        printf("The character entered is lowercase");
    }else{
        printf("The character entered is uppercase");
    }
}