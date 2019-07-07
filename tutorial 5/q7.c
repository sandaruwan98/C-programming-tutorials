#include <stdio.h>

void printName(char fname[],char lname[]){
    printf("Your name is %s %s \n", fname,lname );
}


int main (){
	char n1[10],n2[10];
	printf("Enter first name : ");
	scanf("%s",&n1);
	printf("Enter last name : ");
	scanf("%s",&n2);
	
    printName(n1,n2);
	
	
	return 0;
}


