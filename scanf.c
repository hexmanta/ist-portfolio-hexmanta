#include <stdio.h>

int main()
{
	int age;
	float gpa;
	char grade;

	printf("How old are you? \n");
	scanf("%i", &age);
	fflush(stdin);
	printf("You entered: %i\n", age);
	printf("What is your GPA? \n");
	scanf(" %f", &gpa);
	fflush(stdin);
	printf("You entered: %f\n", gpa);
	printf("What is your grade? \n");
	scanf(" %c", &grade);
	fflush(stdin);
	printf("You entered: %c\n", grade);
	return 0;
}
