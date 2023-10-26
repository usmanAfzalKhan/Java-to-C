#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int math = 78;
	int english = 82;
	int physics = 90;
	double average;
	average = (double)(math + english + physics) / 3;
	printf("%2.2f\n", average);
	return 0;
}
