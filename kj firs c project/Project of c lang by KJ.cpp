#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

int Calculator();
int mainmenu();
int Table();
int Comparision();
int Marksheet();
int Linear_Search();
int prime_no();
int Palndrome();
int Usages_Of_String();
int K_Electric_Bill();
int Amstrong();


int main(){
	char Name[20] = "KJ" , UName[20] ;
	int Password;
	printf("\n User Name : ");
	scanf("%s" , &UName);
	
	if(strcmp(UName , Name) == 0){
		
		printf("\n Enter Password : ");
		scanf("%d" , &Password);
		
		if(Password == 123){
			
			printf("\n Logined");
		}
		
		else {
			
			printf("\n Login Failed.");
		}
	}
	else {
		printf("\n Invalid User Name");
	}

	system("cls");
	
	
    mainmenu();	
		 	 

	getch();
}
int mainmenu(){
	system("cls");
	printf("\n\n\t\t\t***Welcome***\n\n");
	printf("\n\t 1: Calculator \n\t2.Table \n\t 3: Comparision \n\t 4: Mark Sheet \n\t 5: Liner Search \n\t 6: Prime no \n\t 7. Palandrome  \n\t 8. Usage of Strings  \n\t 9. K-Electric Bill \n\t 10. Amstrong  \n\t 11. Exit \n\n\t Press number to perform task... ");

	
	int Choice;
	
	scanf("%d" , &Choice);
	
	switch(Choice){
		
		case 1 :
			Calculator();
		break;
		
		case 2 :
		Table();
		break;
		
		case 3 :
		Comparision();
		break;
		
		case 4 :
		Marksheet();
		break;
		
		case 5 :
		Linear_Search();
		break;
		
		case 6 :
		prime_no();
		break;
		
		case 7 :
		Palndrome();
		break;
		
		case 8 :
		Usages_Of_String();
		break;
		
		case 9 :
		K_Electric_Bill();
		break;
		
		case 10 :
		Amstrong();
		break;
		
		
		case 11 : 
			exit(0);
		break;
		
	default:
		printf("\n\n\t\t\t\t***Invalid input: /n Please see instructions ***");
		sleep(2);
			system("cls");
	}
}

int Calculator(){

	printf("\n\n\t\t\t***CALCULATOR***\n\n");

	float a , b ,c;
	char op;
	
	printf("\n\nPress Symbols to perform operations \n  +  for Addition \n  - for Subtraction \n  *  for Multiplication \n  / for Division\n m for main menu \n e for main menu");
	
 
	printf("\n Enter Symbols:  ");
	scanf(" %c" , &op);

	switch(op){
	
	case '+':
		

		printf("\n Enter 1st  Number : ");
		scanf("%f" , &a);
		
		printf("\n Enter 2nd Number : ");
		scanf("%f" , &b);
	
		c = a + b;
		printf("\n %0.2f + %0.2f = %0.2f " , a ,b, c);	
		break;
	
	case '-': 
		

		printf("\n Enter 1st  Number : ");
		scanf("%f" , &a);
		
		printf("\n Enter 2nd Number : ");
		scanf("%f" , &b);
	
		c = a - b;
		printf("\n %0.2f - %0.2f = %0.2f " , a , b, c);
		break;
	
	case '*': 
	

		printf("\n Enter 1st  Number : ");
		scanf("%f" , &a);
		
		printf("\n Enter 2nd Number : ");
		scanf("%f" , &b);
	
		c = a * b;
		printf("\n %0.2f * %0.2f = %0.2f " , a , b, c);
		break;
	
	case '/': 
	

		printf("\n Enter 1st  Number : ");
		scanf("%f" , &a);
		
		printf("\n Enter 2nd Number : ");
		scanf("%f" , &b);
	
		c = a / b;
		printf("\n %0.2f / %0.2f = %0.2f " , a , b, c);
		break;
		
	case 'm':
		
		mainmenu();
		break;
		
	case 'e': 
		exit(0);
		break;
		
	default:
		printf("Invalid input /n Please see instructions ***");
		sleep(2);
			system("cls");
		Calculator();
}
Calculator();
}
int Table(){
	
	printf("\n\n\t\t\t***TABLES***\n\n");
	char op;
		printf("\n\t 1: for Table(s) \n\t m: for MainMenue  \n\t e: for Exit \n\n\t Press Your Desire Numbers:  ");
		scanf(" %c" , &op);

	switch(op){
	
		case '1':{
		
			int Tb  , Start , End;
	
			printf("\n Enter Table Number : ");
			scanf("%d" , &Tb);
			
			printf("\n Enter Starting Point : ");
			scanf("%d" , &Start);
		
			printf("\n Enter Ending Point : ");
			scanf("%d" , &End);
		
			for(int i = Start; i <= End; i++)
				{
					printf("\n %d * %d = %d ",Tb , i, Tb*i);
				}
			Table();
			}
	
	case 'm':
		system("cls");
		mainmenu();
	break;
		
	case 'e': 
		exit(0);
		break;
		
	default:
		printf("\n\t***Invalid input***");
		sleep(2);
			system("cls");
		Table();
		
	}
Table();	
}
int Comparision(){
	int op;
		printf("\n\n\t\t\t***COMPARISION***\n\n");
		
		printf("\n\t1. for Perform comparision \n\t 2. for Main menu \n\t 3. for Exit \n\tPress your desire numbers to perform task... ");
		scanf(" %d", &op);

	switch(op){
		case 1:
			int a, b, c; 
		
		printf("\n Enter 1st number  : ");
		scanf(" %d" , &a);
		
		printf("\n Enter 2nd number : ");
		scanf(" %d" , &b);
		
		printf("\n Enter 3rd number : ");
		scanf(" %d" , &c);
		
			if(a > b && a > c){
				printf("\n A is the Largest : the value is... %d   " ,a);
				}
			else if (b > a && b > c){
				printf("\n B is the Largest : the value is... %d  " , b);
				}
			else if (c > a && c > b){
				printf("\n C is the Largest : the value is... %d  " , c);
				}
			else {
				printf("\n All Are same");
				}
		break;
		case 2:
			system("cls");
			mainmenu();
		break;
		
		case 3:
			system("cls");
			exit(0);
		break;
		
		default:
			printf("\n\n\t\t\t\t***Invalid input***");
			sleep(3);
			system("cls");
			Comparision();
	}
Comparision();
}
int Marksheet(){
	int op;
	printf("\n\n\t\t\t***MarkSheet**\n\n");
	printf("\n\t1. for Marksheet \n\t 2. for Main menu \n\t 3. for Exit \n\tPress your desire numbers to perform task... ");
	scanf(" %d", &op);
	
	switch(op){
		case 1:
			{
			int arr[100];
			int total[100];
			int count, n, percentage;
			int totalmarks=0;
			int result=0;
			
				printf("\n\t Enter the  number of subjects ");
				scanf("%d", &n);
				
			for(count=1; count<=n; count++){
				printf("\n\tEnter total marks of subjectfor subject %d :" , count);
				scanf(" %d", &total[count]);
				
				printf("\n\t Enter obtained marks of subject for subject %d : ", count);
				scanf(" %d", &arr[count]);
				
				totalmarks=totalmarks+total[count];
				result=result+arr[count];
			}
				printf("\n\t Total marks is %d", totalmarks);
				printf("\n\t Marks obtained is %d", result);
				percentage=(result*100)/totalmarks;
				printf("\n\t\ Total percentage is %d",percentage);
		
			if(percentage>=80){
				printf("\n\t\t\t\tYour grade is A++\n\t !!..Excellent..!!\n");
			}
		
			else if(percentage>=70 && percentage <80){
				printf("\n\t\t\t\tYour grade is An\t !!..Very Good..!!\n");
			}
		
			else if(percentage>=60 && percentage <70){
				printf("\n\t Your grade is B n\t !!..Good..!!\n");
			}
		
			else if(percentage>=50 && percentage <60){
				printf("\n\t Your grade is C \n\t n\t !!..Not Soo much Good , keep to Try work hard..!!\n\n");
			}
			else{
				printf("n\t !!..You are Fail..!!\n");
			}
				Marksheet();
			}
		break;
		case 2:
			system("cls");
			mainmenu();
		break;
		
		case 3:
			system("cls");
			exit(0);
		break;
		
		default:
			printf("\n\n\t\t\t\t***Invalid input***");
			sleep(2);
			system("cls");
			Marksheet();
	}
Marksheet();
}

int Linear_Search(){
	int op;
	printf("\n\n\t\t\t!!..Liner Search ..!!\n\n");
	printf("\n\t 1. for Liner Search \n\t 2. for Main menu \n\t 3. for Exit \n\t Press your desire numbers to perform task... ");
	scanf(" %d", &op);
	
	switch(op){
		case 1:
			{
			int arr[100];
			int searchvalue, count, n;
			
			printf("\n\t Enter number of element in array ");
			scanf("%d", &n);
		
			printf("\n\t Enter integer values for %d array\n", n);
			for(count=0; count<=n; count++){
				scanf("%d", &arr[count]);
				printf("\t\t\t\t");
			}
				printf("\n\t Enter the number to searchvalue ");
				scanf("%d", &searchvalue);
			for(count=0; count<=n; count++)
			{
				if(arr[count]==searchvalue){
					printf("\n\n Value found at index %d\n\n", count);
				}
				else if(count==n){
					printf("\n\n Value not found \n\n");
				}
			}
			Linear_Search();
			}
		break;
		
		case 2:
				system("cls");
				mainmenu();
		break;
		
		case 3:
				exit(0);
		break;
		
		
		default:
			printf("Invalid input /n Please see instructions ...!!");
			sleep(2);
			system("cls");
			Linear_Search();
	}
Linear_Search();

}
int prime_no(){
	int op;
	
	printf("\n\n\t\t\t!!..Prime No..!!\n\n");
	printf("\n\t1   for Prime no n\t 2.  Prime no or Composite \n\t 3. for Main menu \n\t 4. for Exit \n\tPress your desire numbers to perform task... ");
	scanf(" %d", &op);
	
	switch(op){
		case 1:
			{
			char num;
			printf("\n\t Enter number to Check whether it is Even or Odd ");
			scanf("%d", &num);
			if(num%2==0){
				printf("\n\t %d is an Even number\n\n",num);
			}
			else{
				printf("\n\t %d is an Odd number\n\n",num);	
			}
			prime_no();
			}
		break;
			case 2:
			{
			char num, count;
			printf("\n\t Enter number to Check whether it is Prime or Composite ");
			scanf("%d", &num);
			for(count=2; count<=num-1; count++){
				if(num%count==0){
					printf("\n\t %d is a Composite number\n\n",num);
				break;
				}
			}
				if(count==num){
					printf("\n\t %d is a Prime number\n\n",num);	
				}
			mainmenu();
			}
		break;
		case 3:
			system("cls");
			mainmenu();
		break;
		
		case 4:
			system("cls");
			exit(0);
		break;
		
		default:
			printf("\n\t***Invalid input***");
			sleep(2);
			system("cls");
			prime_no();
	}
prime_no();
}			
int Palndrome(){
	int op;
	
	printf("\n\n\t\t\t!!..Palndrome..!!\n\n");
	printf("\n\t1 for palandrome \n\t 2. for Main menu \n\t 3. for Exit \n\tPress your desire numbers to perform task... ");
	scanf(" %d", &op);
	
	switch(op){
		case 1:
			{
			int reverse=0, temp, reminder, number;
				printf("\n\t Enter number to Check whether it is Palindrome number or not ");
				scanf("%d", &number);
				temp=number;
				while(number>0){
					reminder=number%10;
					reverse=reverse*10+reminder;
					number=number/10;
				}
				if(temp==reverse)
					printf("\n\t It is a Palindrome number\n\n");
				else
					printf("\n\t It is not a Palindrome number\n\n");
		 	Palndrome();
			}

		break; 
		
		case 2:
			system("cls");
			mainmenu();
		break;
		
		case 3:
			system("cls");
			exit(0);
		break;
		
		default:
			printf("\n\n\t!!..Invalid input..!!");
			sleep(2);
			system("cls");
			Palndrome();
	}
Palndrome();
}		

int Usages_Of_String(){
	int opt;
		printf("\n\n\t!!...Usage OF string..!!\n\n");
		printf("\n\t 1. for String Concatenatenation \n\t 2. for find String Length \n\t 3. for String Comparision \n\t 4. for convert String Upper and Lower case \n\t 5. for Reverse String\n\t 6. for Main menu \n\t\ 7. for Exit /n /t  Press numbers to perform task... ");
		scanf(" %d", &opt);
	switch(opt){
		case 1:
			{
			char a[100], b[100];
			printf("\n\t Enter the first string ");
			scanf("%s", &a);
			printf("\n\t Enter the second string ");
			scanf("%s", &b);
			strcat(a,b);
			printf("\n\t %s \n\n",a);
			Usages_Of_String();
			}
		break;
		case 2:
			{
			char a[100];
		    int length;
		    printf("\n\t Enter a string to calculate it's length ");
		    scanf("%s", &a);
		    length = strlen(a);
		    printf("\n\t Length of entered string is %d\n\n",length);
			Usages_Of_String();
			}
		break;
		case 3:
			{
			char a[100], b[100];
		   	printf("\n\t Enter the first string ");
		   	scanf("%s", &a);
		   	printf("\t\t Enter the second string ");
		   	scanf("%s", &b);
		   	if (strcmp(a,b) == 0)
		      	printf("\n\t Strings are equal\n\n");
		   	else
		      	printf("\n\t Strings are not equal\n\n");
		 	Usages_Of_String();
			}
		break;
		case 4:
			{
			char lower[100], upper[100];
			printf("\n\t Input a string to convert into lower case ");
			scanf("%s",&lower);
			printf("\n\t Input a string to convert into upper case ");
			scanf("%s", &upper);
			printf("\n\t Input string in lower case %s\n\n", strlwr(lower));
 			printf("\n\t Input string in upper case %s\n\n",strupr(upper));
		 	Usages_Of_String();
			}
		break;
		case 5:
			{
			char arr[100];
			printf("\n\t Enter a string to reverse ");
			scanf("%s", &arr);
			strrev(arr);
			printf("\n\t Reverse of string is %s\n\n",arr);
		 	Usages_Of_String();
			}
		break;
		case 6:
			system("cls");
			mainmenu();
		break;
		
		case 7:
			system("cls");
			exit(0);
		break;
		
		default:
			printf("\n\n\t !!..Invalid input..!!");
			sleep(2);
			system("cls");
			Usages_Of_String();
	}
}		
//Unit	Charge/unit
//upto 199	@1.20
//200 and above but less than 400	@1.50
//400 and above but less than 600	@1.80
//600 and above	@2.00
//If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-

int K_Electric_Bill(){
	int op;
	
	printf("\n\n\t\t\t!!..K_Electricc..!!\n\n");
	printf("\n\t1 for Bill \n\t 2. for Main menu \n\t 3. for Exit \n\tPress your desire numbers to perform task... ");
	scanf(" %d", &op);
	
	switch(op){
	case 1: {
	 int custid, conu;
   float chg, surchg=0, gramt,netamt;
   char connm[25];

   printf("Input Customer ID :");
   scanf("%d",&custid);
   printf("Input the name of the customer :");
   scanf("%s",connm);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&conu);
   if (conu <200 )
	chg = 1.20;
   else	if (conu>=200 && conu<400)
		chg = 1.50;
	else if (conu>=400 && conu<600)
			chg = 1.80;
		else
			chg = 2.00;
   gramt = conu*chg;
   if (gramt>300)
	surchg = gramt*15/100.0;
   netamt = gramt+surchg;
   if (netamt  < 100)
	netamt =100;
   printf("\nElectricity Bill\n");
   printf("Customer IDNO                       :%d\n",custid);
   printf("Customer Name                       :%s\n",connm);
   printf("unit Consumed                       :%d\n",conu);
   printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",chg,gramt);
   printf("Surchage Amount                     :%8.2f\n",surchg);
   printf("Net Amount Paid By the Customer     :%8.2f\n",netamt);
K_Electric_Bill();
}
		break; 
		
		case 2 :
			system("cls");
			mainmenu();
		break;
		
		case 3 :
			system("cls");
			exit(0);
		break;
		
		default:
			printf("\n\n\t!!..Invalid input..!!");
			sleep(2);
			system("cls");
			K_Electric_Bill();
	}
K_Electric_Bill();
}		

int Amstrong(){
	int op;
	
	printf("\n\n\t\t\t!!..Amstronge..!!\n\n");
	printf("\n\t1 for Amstrong \n\t 2. for Main menu \n\t 3. for Exit \n\tPress your desire numbers to perform task... ");
	scanf(" %d", &op);
	
	switch(op){
		case 1:
		{
			int number, rem , result=0 , temp;
				printf("\n\t Enter number to Check whether it is Armstrong number or not ");
    			scanf("%d", &number);
    			temp = number;
    			while (number != 0){
        			rem = number % 10;
        			number =number/ 10;
        			result+=rem*rem*rem;
    			}
    			if (result == temp)
        			printf("\n\t It is an Armstrong number\n\n");
    			else
        			printf("\n\t It is not an Armstrong number\n\n");
			Amstrong();
			}

		break; 
		
		case 2:
			system("cls");
			mainmenu();
		break;
		
		case 3:
			system("cls");
			exit(0);
		break;
		
		default:
			printf("\n\n\t!!..Invalid input..!!");
			sleep(2);
			system("cls");
			Palndrome();
	}
Amstrong();
}		





