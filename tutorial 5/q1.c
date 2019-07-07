#include <stdio.h>



int addition(int a,int b){
	return a+b;
}




int main (){
	int n1,n2;
	printf("Enter number 1 : ");
	scanf("%d",&n1);
	printf("Enter number 2 : ");
	scanf("%d",&n2);
	printf("Sum of numbers are : %d", addition(n1,n2) );
	
	
	return 0;
}


