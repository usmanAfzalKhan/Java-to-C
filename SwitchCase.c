#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num;
	printf("Please enter an integer : ");
	scanf("%d", &num);
	int remainder = num % 3;
	switch (remainder){
		case 0:
			printf("In case 0...");
			break;
		case 1:
			printf("In case 1...");
			break;
		case 2:
			printf("In case 2...");
			break;
	}	
	return 0;
}
