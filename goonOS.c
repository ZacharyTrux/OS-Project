/** Name: Zachary Truxillo, Diego Medina, Kam Buckey
 *  Date:
 *  Description: 
 */

#include <stdio.h>
#include "virt-os.h"

/*
    functions to use :D 
*/
void callback(int num);

void cmdExecutor();


int main(){
    

    printf("GOON MODE ACTIVATED: GOONERS UNITE\n");
    printf("STARTING UP THE GOON DRIVERS\n");
    printf("GOON ON BROTHER\n");
    registerKeyPressCallback();
   
    initializeOS();

    return 0;
}

