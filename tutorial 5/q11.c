#include <stdio.h>

int fact(int n){
    if(n>1)
    return n * fact(n-1);
}

int main (){
	int i;	
    
	for(i = 1; i < 11; i++)
    {
        printf("Factoral of %d is : %d\n",i,fact(i) );
    }
	return 0;
}


