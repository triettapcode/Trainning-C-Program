// Program to calculate  the sum of first n natual numbers
// positive integers 1,2,3...n are known as natural numbers

#include <stdio.h>
int main () {
	int num, count, sum = 0;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	// for loop terminates when count exceeds num
	for(count = 1; count <= num; ++count) 
	{
	
		sum +=count;
	}
	printf("sum = %d", sum);
	return 0;
}