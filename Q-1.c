#include<stdio.h>

main(){
	
	char value;
	
	printf("Enter the any character :-");
	scanf("%s", &value);
	
	if((value >= 'a' && value <= 'z') || (value >= 'A' && value <= 'Z')){
		printf("\n%c is alphabet", value);
	}else if(value >= '0' && value <= '9'){
		printf("\n%c is digit", value);
	}else{
		printf("\n%c is special character", value);
	}
}
