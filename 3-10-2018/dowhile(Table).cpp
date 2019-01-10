#include<stdio.h>
main(){
	
	int Table , Start , End;
	
	printf("\n Enter Table Number : "); 
	scanf("%d" , &Table);
	
	printf("\n Enter Starting Point : ");
	scanf("%d" , &Start);
	
	
	int i = Start;
	do{
	printf("\n %d * %d = %d " , Table , i , Table * i);
		
		i++;
	}
	while(i <= 10);
	
	
}
