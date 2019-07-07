#include <stdio.h>
#include <string.h>

int intlist[50];

void swap(int a,int b){
	int temp = intlist[a];
	intlist[a] = intlist[b];
	intlist[b] = temp;
}
// --------------------------------------------------  MAIN  -----------------------------------------------------------
int main (){

    int i=0,n;
	printf("Enter number count : ");
    scanf("%d",&n);
	

	 for( i = 0; i < n; i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&intlist[i]);
	}

     for( i = 0; i < n/2; i++){
		 swap(i,n-i-1);
	 }
     printf("Reversed int list : ");
    for( i = 0; i < n; i++)
    {
		
        printf("%d  ",intlist[i]);
        
	}
	
	
    
    
	return 0;
}


