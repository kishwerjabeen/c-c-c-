#include<stdio.h>
#include<conio.h>
main(){
	
	int i = 1; // Starting Point or intialization
	
	do {
		
		printf("\n %d " , i); // output 
		
		i++; // increment or decrement
	}
	while(i < 11); // condition or ending point
	
	// ----------------------- decrement --------------------
	int j = 10;
	do {	
		printf("\n value of j = %d  " , j);
		
		j--;
	}
	while(j > 0);
	
	
	getch();
}
