#include<stdio.h>

main(){
	
	int  physics, chemistry, biology, mathematics, computer, total;
	float percentage;
	
	printf("Enter The Marks");
	printf("\n\nPhysics :-");scanf("%d", &physics);
	printf("\nChemistry :-");scanf("%d", &chemistry);
	printf("\nBiology :-");scanf("%d", &biology);
	printf("\nMathematics :-");scanf("%d", &mathematics);
	printf("\nComputer :-");scanf("%d", &computer);
	
	total = physics + chemistry + biology + mathematics + computer;
	percentage = total * 100 / 500;
	
	printf("\n\nYour Percentage = %.2f\n", percentage);
	
	if(percentage >= 90){
		printf("\nYou are pass on Grade A");
	}else if(percentage >= 80){
		printf("\nYou are pass on Grade B");
	}else if(percentage >= 70){
		printf("\nYou are pass on Grade C");
	}else if(percentage >= 60){
		printf("\nYou are pass on Grade D");
	}else if(percentage >= 50){
		printf("\nYou are pass on Grade E");
	}else if(percentage >= 40){
		printf("\nYou are pass on Grade F");
	}else{
		printf("\nSorry... You are fail");
	}
}
