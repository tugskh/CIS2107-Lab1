#include <stdio.h>

int main(int argc, char *argv[]){
	
	
	//Declare variables 
	char name[25];
	int age = 0;
	
	//Print Hello World!
	printf("Hello World!\n");
	
	//Get user name
	printf("\nEnter your name: ");
	scanf("%s", name);
	
	//Get user age
	printf("\nEnter your age: ");
	scanf("%d", &age);
	
	//Print data to screen
	printf("\nHello %s your age is %d\n", name, age);
	
	printf("\nPress a key to exit");
}
