// Caesar Shift, in C.
// Program parameters: # to shift, "String to shift"
// Ex:
//		./CaesarShift.c 5 "Cow Goes Moo!"
//		returns:     Ht|%Ltjx%Rtt
		
// Then you can run the reverse ....
//		./CaesarShift.c -5 "Ht|%Ltjx%Rtt"
//		returns:     Cow Goes Moo!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char* argv[]) {

	int shift = atoi(argv[1]);
	char message[256];
	strcpy(message, argv[2]);
	
	int i;
	for(i = 0; i < strlen(message); i++) {
		printf("%c", message[i] + shift);
	}
	putchar('\n');
	return 0;
}