#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int n, char *args[]) {
	if (n < 2) {
		printf("argument list is empty.\n");
	} else {
		char *inp = args[1];
		// removes spaces before path
		while (*inp == ' ') {
			++inp;
		}
		printf("\nYour input is: %s", inp);

		char buff[1000] = "/mnt/";
		buff[5] = tolower(inp[0]);
		buff[6] = '\0';
		strcat(buff, inp + 2);
		for (int i = 6; i < strlen(buff); ++i) {
			if ( buff[i] == '\\' ) {
				buff[i] = '/';
			} 
		}
		printf("\nConverted path is:\n%s\n", buff);
		printf("The command to switch to this directory:\ncd %s\n\n", buff);
	}
}
