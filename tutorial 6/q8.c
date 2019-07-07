#include <stdio.h>
#include <string.h>

// --------------------------------------------------  MAIN  -----------------------------------------------------------
int main (){
    printf("Enter a char number : ");
    char n[50];
    int i=0,isnumber = 1;
    scanf("%s",&n);

    while(isnumber && (i < strlen(n))){
        int num = n[i] - '0';
        if (!(num >= 0 && num <= 9)) {
            isnumber = 0;
        }
        i++;
    }
    
    if (isnumber) {
         printf("\n---Given string is a number---");
    }else
    {
         printf("\n---Given string is not a number---");
    }
    
    
    
	
	
    
    
	return 0;
}


