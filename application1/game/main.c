#include <stdio.h> 

int main(){ 
	
	char name[50]; 
	int health = 100; 
	int damage = 0; 
	// Integer Damage changes based off of what weapon you are holding. 
	char input;
	printf("Welcome to this simple video game I made. Enter your name. \n");

	scanf("%s", name); 

	printf("Welcome to the game %s!", name);	
	return 0; 




}
