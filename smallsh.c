// Program file for the Shell program

#include "smallsh.h"

int main() {

    char command[25];

    while(strcmp(command, "exit") != 0) {
        
    printf(": ");

    scanf("%s", command); 

    if (strcmp(command, "cd") == 0)
        printf("change directory \n");

    else if (strcmp(command, "status") == 0)
        printf("status query \n");

    }
         
    
    return 0;
}
