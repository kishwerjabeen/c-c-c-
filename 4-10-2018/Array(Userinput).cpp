#include<stdio.h>
main(){
	
	int Array[5];
	
	for(int j = 0 ; j < 5 ; j++ ){
		
printf("\n Enter Array's Value on index no : %d :  " , j);
		scanf("%d" , &Array[j]);
	}
	
	for(int j = 0 ; j < 5 ; j++){
		
		printf("\n %d " , Array[j]);
	}
	
}
