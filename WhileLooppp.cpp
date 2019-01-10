#include<stdio.h>
main(){
		
		int Remainder; 
	int i = 1 ; 
	while(i <= 10){
		Remainder = i % 2;
		if(Remainder == 0){	
	printf("\n %d  Is an even number. %d"  ,i , Remainder);
		} 
		
		else {
	printf("\n %d  is an odd Number. %d"  , i , Remainder);
		}
		i++;
	}
	
	
	
}
