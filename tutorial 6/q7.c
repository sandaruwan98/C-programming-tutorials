#include <stdio.h>
#include <string.h>



// --------------------------------------------------  MAIN  -----------------------------------------------------------
int main (){
    printf("Enter a char number : ");
    char n;
    scanf("%c",&n);
    int num = n - '0';
    if (num >= 0 && num <= 9) {
         printf("\n---Given character is a numerical value---");
    }else
    {
         printf("\n---Given character is not a numerical value---");
    }
    
    
    
	
	
    
    
	return 0;
}


