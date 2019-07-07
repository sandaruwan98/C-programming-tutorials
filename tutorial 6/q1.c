#include <stdio.h>



int main(){
	int m[10][10];
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++)
		{
			m[i][j] = (i+1)*(j+1);
		}	
	}
	
		for(i=0;i<10;i++){
			printf("%d >  |",i+1);
		for(j=0;j<10;j++)
		{
			printf(" %d\t|",m[i][j]);
		}	
			printf("\n      ___________________________________________________________________________________\n");
	}
	
	
	
	
	
	return 0;
}
