/* Multiline

Comment*/

//single line comment

#include <stdio.h>
#include <string.h>

#define MYNAME "Sangeet Dandona"

int globevar=100;

int main()
	{
		char Firstletter = 'S';
		
		int age = 32;
		
		long int superbig = -327670000;
		
		float pi = 3.14159;
		
		double reallybigpi = 3.141591111111;
		
		printf("\n");
		
		// \n: newline, \t: tab
		
		printf("This will print to screen\n\n");
		
		printf("I am %d years old\n\n", age);
		
		printf("Big Number: %ld\n\n", superbig);
		
		printf("Pi is %.5f\n\n", pi);
		
		printf("big pi is %.7f\n\n", reallybigpi);
		
		printf("the first letter of my name is %c\n\n", Firstletter);
		
		printf("My name is %s\n\n", "Sangeet");
		
		char myName[] = "Sangeet Dandona";
		
		printf("My name is %s\n\n", myName);
		
		strcpy(myName, "Logan");
		
		printf("My name is %s\n\n", myName);
		
		return 0;
		
	}
	
	
		

