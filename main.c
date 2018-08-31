//Luis Ignacio Acosta Zamora A01411895
// The program should accept only integer numbers between 0 and 23 (inclusive).
    //If the user inputs anything other than the valid input, the program should send an error message and terminate itself.
    //Greet the user according to the hour received:
        //If the hour is less than12 and more than 2, say "Good morning!".
        //If the hour is greater than or equals to 12 but less than 19, say "Good afternoon!".
        //If the houris greater than or equals to 19 but less than 22, say"Good evening!".
        //Every other value should produce the"Good night!" message.

#include <stdio.h>

int main() {

    // Establish variables
    int time;

    printf("Please enter the current time, between 0 and 23: ");
    scanf("%d", &time);

    if( time >= 0 && time <= 23 ){
        if( time > 2 && time < 12 ){
            printf("Good morning!");
            return 0;
        }

        else if( time >= 12 && time < 19 ) {
            printf("Good afternoon!");
            return 0;
        }

        else if( time >= 19 && time < 22 ) {
            printf("Good evening!");
            return 0;
        }

        else {
            printf("Good night!");
            return 0;
        }
    }
    else {
        printf("Error 2463: Not a valid time. ");
        return 0;
    }
}