// program to relate two integers using =, > or < symbol
#include <stdio.h>
int main() {
	int number1,number2;
	printf("Enter an two integers:");
	scanf("%d %d", &number1 ,&number2);
	//check if the two integers are equal
	
	if( number1 == number2) {
		printf ("result: %d = %d", number1,number2);
	}
	// check if number1 is greater than number2.
	else if ( number1>number2){
		printf("result: %d>%d",number1,number2);
		
	}
	return 0;
	
}