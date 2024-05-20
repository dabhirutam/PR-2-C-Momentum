#include<stdio.h>

main(){
	
	char choise;
	
	printf("Enter 'm', 'T', 'w', 't', 'f', 's', 'S'");
	printf("\nPress any key for exit");
	
	printf("\n\nEnter the value :-");
	scanf("%s", &choise);
	
	switch(choise){
		
		case 'm' :
			printf("\nMonday");
		break;
		
		case 'T' :
			printf("\nTuesday");
		break;
		
		case 'w' :
			printf("\nWednesday");
		break;
		
		case 't' :
			printf("\nThursday");
		break;
		
		case 'f' :
			printf("\nFriday");
		break;
		
		case 'S' :
			printf("\nSaturday");
		break;
		
		case 's' :
			printf("\nSunday");
		break;
		
		default :
			printf("\nThank you...");
	}
}
