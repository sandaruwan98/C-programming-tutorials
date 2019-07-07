#include <stdio.h>

int i,count=0;

int increment(){
	count=0;
	while((i+count)%9!=0)
		{
			printf("%d  ",i+count);
			count++;
			
		}
		
			printf("\nmultiple of 9 is : %d  ", i+count);
	
	
	
		
	
}




int main (){
	printf("Enter number : ");
	scanf("%d",&i);
	increment();
	
	return 0;
}


