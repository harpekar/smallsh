// Program file for the Shell program

#include "smallsh.h"

void reportStatus(int status) {
    printf("exit value %d \n", status);
} 

void changeDirectory(char* directory) {
    char* homedir = getenv("HOME");
    printf("%s \n", homedir);    
}

void runShell() {

    char command[25];

    while(strcmp(command, "exit") != 0) {
        
        printf("command first value is %c \n", *command);      
        

        printf(": ");

        scanf("%s", command); 

        if (*command == '#') { // Comment support
            continue;
        }

        else if (strcmp(command, "cd") == 0)
            changeDirectory(command);

        else if (strcmp(command, "status") == 0)
            reportStatus(0);

    }
}

int main() {

    runShell();    
    
    return 0;
}
