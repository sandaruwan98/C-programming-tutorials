#include <stdio.h>
#include <string.h>



// --------------------------------------------------  MAIN  -----------------------------------------------------------
int main (){
    int i,best = 0,mark;
    for( i = 0; i < 5; i++)
    {
        printf("Enter score %d : ",i+1);
        scanf("%d",&mark);
        if (best < mark) {
            best = mark;
        }
    }
    
        if (best >= 40) {
            printf("Best grade is D");
        }else  if (best >= 30) {
            printf("Best grade is C");
        }else if (best >= 20) {
            printf("Best grade is B");
        }else if (best >= 10) {
            printf("Best grade is A");
        }else {
            printf("Best grade is F");
        }
        
        
   
    
    
    
	
	
    
    
	return 0;
}


