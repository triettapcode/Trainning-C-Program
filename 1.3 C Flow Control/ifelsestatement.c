//check whether an integer is odd or even
#include <stdio.h>
int main () {
	int number;
	printf("Enter an integer:");
	scanf("%d", &number);
	// true if the remainder is 0
	if (number%2 == 0){
		printf("%d is an even integer number", number);
	}
	else {
		printf("%d is an odd integer number", number);
	}
	return 0;
	
}