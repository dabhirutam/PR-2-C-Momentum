#include<stdio.h>

main(){
	
	int a,b,c,d;
	
	printf("A :-");scanf("%d", &a);
	printf("B :-");scanf("%d", &b);
	printf("C :-");scanf("%d", &c);
	printf("D :-");scanf("%d", &d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("\nA is max %d",a);
			}else{
				printf("\nD is max %d",d);
			}
		}else{
			if(c>d){
				printf("\nC is max %d",c);
			}else{
				printf("\nD is max %d",d);
			}
		}
	}else{
		if(b>c){
			if(b>d){
				printf("\nB is max %d",b);
			}else{
				printf("\nD is max %d",d);
			}
		}else{
			if(c>d){
				printf("\nC is max %d",c);
			}else{
				printf("\nD is max %d",d);
			}
		}
	}
}
