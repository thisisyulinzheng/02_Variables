#include <stdio.h>
int main() {
	//Testing something here
	int regularInt = 2147483647;
	int overflowedInt = 2147483648;
	printf("Regular: %d, Overflowed:%d\n", regularInt, overflowedInt);

	unsigned int unsignedInt = 4147483648;
	printf("Unsigned Int: %d\n", unsignedInt);

	char regularChar = 60;
	char overflowedChar = 200;
	printf("Regular: %c, Overflowed:%c \n", regularChar, overflowedChar);

	unsigned char unsignedChar = 201;
	printf("Unsigned Int: %c\n", unsignedChar);

	long l =  9223372036854775807;
	float f = 3.1415926;
	printf("Some more types: %ld, %f\n", l, f);
}