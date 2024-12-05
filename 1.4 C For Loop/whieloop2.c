//program to add numbers until the user enters zero
#include <stdio.h>
int main() {
	double number , sum = 0;
	
	//the body of the loop is excuted at least once
	do {
		printf("Enter a number: ");
		scanf("%lf", &number);
		sum += number;
	}
	while(number != 0.0);
	printf("sum = %.2lf", sum);
	return 0;
}