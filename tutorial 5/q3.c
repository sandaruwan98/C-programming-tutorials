#include <stdio.h>
#include <string.h>
#include <math.h>

char s[50];
void reverse(){
	int i,l;
	char temp;
	l = strlen(s);
	for(i=0;i<l/2;i++){
		temp = s[i];
		s[i]= s[l-i-1];
		s[l-i-1]= temp;
	}

}


int main (){
	
	printf("Enter number : ");
	scanf("%s",&s);
	reverse();
	printf("Inverse number id : %s", s);
	
	
	return 0;
}

