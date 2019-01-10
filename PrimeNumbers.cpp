#include<stdio.h>
main(){
	
	int i = 2;
	while(i <= 50){
		
		int j = 2 ;
	while(j < i){

		if(i%j == 0){
			
			break;	
		}
		else if (i == j + 1){
			
			printf("\n %d is prime number" , i);
		}
		j++;	
		}	
			i++;
	}	
	
	
	
}
