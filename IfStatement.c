#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x = 3, y = 3, z = 0;
	if(x > 2){
		if (y > 2){
			z = x + y;
			printf("z is %d\n", z);
		}
	}
	else
		printf("x is %d\n", x);
	return 0;
}
