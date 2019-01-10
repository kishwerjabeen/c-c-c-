#include<stdio.h>
main(){
	
	int Matrix1[2][2];
	for(int r = 0 ; r < 2 ; r++){
		for(int c = 0 ; c < 2 ; c++){
			
			printf("\n Enter R = %d & C = %d  : " , r ,c  );
			scanf("%d" , &Matrix1[r][c]);
		}	
	}
	for( int r = 0 ; r < 2 ; r++){
	
	for(int c = 0 ; c < 2 ; c++){
		
		printf("\t %d " , Matrix1[r][c]);
	}
	printf("\n\n");
	}
	
	
	
	
	
}
