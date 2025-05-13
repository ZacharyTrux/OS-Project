/** Name: Zachary Truxillo, Diego Medina, Kam Buckey
 *  Date:
 *  Description: 
 */

#include <stdio.h>
#include "virt-os.h"

#include <stdlib.h>

#define MAX_SIZE 256

char string[MAX_SIZE];
int ctr = 0;
int keyMap[50] = {0}; 


void initialize();
void callback(int key_code);
void cmdExecutor(const char *command_string);

int main(){

    initialize();
    registerKeyPressCallback(callback);
    registerCommandHandler(cmdExecutor);
    initializeOS();

    return 0;
}

/*
void callback(int keycode) {
    if keycode is a valid printable character:
        convert to char
        insertKeyData(char as string)

    else if keycode is ENTER:
        insertKeyData("\n")
        store current input as command
        call command handler (implicitly triggers when Enter is pressed)

    else if keycode is BACKSPACE:
        insertKeyData("Backspace")

    else if keycode is ESC:
        exit(0)
}
*/

void callback(int key_code){
    // checks if key_code is a valid ASCII letter
    
    printf("%d\n", key_code);

    /*
    char character = keyMap[key_code];
    if (ctr < MAX_SIZE - 1) {
        string[ctr++] = character;
        string[ctr] = '\0';
    }
    char displayStr[2] = {character, '\0'};
    insertKeyData(displayStr);
    */

    printf("Character: %c\n", keyMap[key_code]);
    
    /*
    // checks if key_code is "enter" key
    if(key_code == 13){
        insertKeyData("\n");
        cmdExecutor(string);
        ctr = 0;
        
    }
    // checks if key_code is "backspace" key
    else if (key_code == 8){
        insertKeyData("Backspace");
        if (ctr > 0) {
            string[ctr] = '\0';
            ctr--;
        }
    }
    // checks if key_code is "esc" key
    else if (key_code == 27) {
        exit(0);
    } 
        */

}

void cmdExecutor(const char *command_string){
    
}   



void initialize(){
    // initializes all characters...im dissapointed in you, you know why
    keyMap[33] = 'a'; keyMap[12] = 'b';keyMap[11] = 'c';keyMap[4]  = 'd';keyMap[45] = 'e';keyMap[32] = 'f';keyMap[44] = 'g';keyMap[37] = 'h';keyMap[14] = 'i';keyMap[15] = 'j';keyMap[18] = 'k';keyMap[42] = 'm';keyMap[47] = 'l';keyMap[36] = 'n';keyMap[39] = 'o';keyMap[20] = 'p';keyMap[7]  = 'q';keyMap[2]  = 'r';keyMap[38] = 's';keyMap[9]  = 't';keyMap[8]  = 'u';keyMap[22] = 'v';keyMap[34] = 'w';keyMap[40] = 'x';keyMap[21] = 'y';keyMap[6]  = 'z';keyMap[46] = '1';keyMap[10] = '2';keyMap[5] = '3';keyMap[31] = '4';keyMap[25] = '5';keyMap[17] = '6';keyMap[28] = '7';keyMap[30] = '8';keyMap[23] = '9';keyMap[13] = '0';keyMap[29] ='[';keyMap[1] = ']';keyMap[48] = ';';keyMap[19] = '\\';keyMap[26] = '\'';keyMap[16] = ',';keyMap[24] = '.';keyMap[41] = '/';keyMap[43] = ' ';keyMap[3] = '\n';

}