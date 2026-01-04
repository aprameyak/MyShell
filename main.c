#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void help() {
	printf("\nThis is the shell. You have the following options: \nquit: exit the shell \nhelp: get information\ncd [directory]: change directory \npwd: print directory\n");
}

void quit() {
	printf("\nExiting shell");
	exit(0); 
}

void other_command(char input[256], char *args[256]) {
	char* intok = strtok(input, " ");
	int argc = 0;
	while(intok != NULL) {
		args[argc] = intok;
		argc += 1;
		intok = strtok(NULL, " ");
	}
	args[argc] = NULL;
}

void run_command(char path[256], char *args[256]) {

}

int main() {
	help();
	while(1) {
		char input[256];
		fgets(input, 256, stdin);
		input[strcspn(input, "\n")] = '\0';
		char* intok[256];
		other_command(input, intok );
		if(strcmp(intok[0], "help") == 0) {
			help();
		} else if(strcmp(intok[0], "quit") == 0) {
			quit();
		} else if(strcmp(intok[0], "pwd") == 0) {
			char buffer[256];
			if(getcwd(buffer, 256) != NULL) {
				printf("\nCurrent directory: %s, buffer");
			} else {
				printf("Error getting working directory. Exiting shell");
				exit(1);
			}
		} else {
			if(intok[0][0] == "." || intok[0][0] == "/") {
				if(access(intok[0], X_OK) == 0) {
					
				} else {
					printf("Error accessing executable. Exiting shell");
					exit(1);
				}
			} else {
			
			}
			printf("other");
		}	
	}	
}	
