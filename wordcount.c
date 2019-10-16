/* wordcount.c
    CSC 111 - Fall 2019 - Assignment 4

    Sydney Derksen/V00910431/2/10/19

    This program is designed to count the characters, words, and lines of
    the input provided by the user.

 */

#include <stdio.h>
#include <ctype.h>

int main(){

    int the_character;
    int count_character = 0;
    int count_word = 0;
    int count_lines = 1;

    the_character = getchar();

    while(the_character != '#'){

        //this will count characters
        count_character = count_character + 1;

        if(isspace(the_character) == 0){
            //retrieve and evaluate new character
            the_character = getchar();

            //this will determine is a word has ended
            if(isspace(the_character) != 0){
                count_word = count_word + 1;
            }else if(the_character == '#'){
                count_word = count_word + 1;
            }
        }else if(the_character == '\n') {
            count_lines = count_lines + 1;
            the_character = getchar();
        }else{
            the_character = getchar();
        }

    }

    printf("Characters: %d, Words: %d, Lines: %d", count_character, count_word, count_lines);

    return 0;
}