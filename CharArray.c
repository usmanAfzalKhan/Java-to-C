#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char array[] = {'h', 'e', 'l', 'l', 'o'};
	for (int i = 0; i < 5; i++){
		printf("%c", array[i]);
	}
	return 0;
}
