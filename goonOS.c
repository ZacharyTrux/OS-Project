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

void callback(int key_code);
void cmdExecutor(const char *command_string);

int main(){

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
    printf("%d", key_code);
    char character = (char)key_code;
    printf("%c", character);
    if (ctr < MAX_SIZE - 1) {
        string[ctr++] = character;
        string[ctr] = '\0';
    }

        char displayStr[2] = {character, '\0'};
        insertKeyData(displayStr);
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

}

void cmdExecutor(const char *command_string){
    
}   



