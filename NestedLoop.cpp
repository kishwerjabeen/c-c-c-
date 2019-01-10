#include<stdio.h>
main(){
	int Rows;
	
	printf("\n Enter Rows : ");
	scanf("%d" , &Rows);
	
	int i = 1 ;
	while(i <= Rows){
		
		int j = 1;
		while(j < i){	
			printf(" *");
		j++;	
		}
		printf("\n\n");
		
		i++;
	}
	
	
	
	
}
