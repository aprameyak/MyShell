#include <stdio.h>

int main() {
	help();
	while(1) {
		char[256] input;
		fgets(input, 256, stdin);
		if(strcmp(input, "help") == 0) {
			help();
		} else if(strcmp(input, "quit") == 0) {
			quit();
		} else {
			
		}	
	}		

}

void help() {
	printf("This is the shell. You have the following options:\n. quit: exit the shell\n
		 help: get information\n cd [directory]: change directory\n pwd: print directory");
}

void quit() {
	printf("Exiting shell");
	exit() 
}
