#include <stdio.h>
#include <string.h>



// --------------------------------------------------  MAIN  -----------------------------------------------------------
int main (){
    printf("Enter a string : ");
    char str[100];
    scanf("%[^\n]s",str);
    int i,avlble = 0;
    
	for( i = 0; i < strlen(str); i++)
    {
        char x = str[i];
        if (x == 'c') {

            if (str[i+1] == 'o') {

                if (str[i+2] == 'r') {

                    if (str[i+3] == 'd') {
                        avlble = 1;
                    }
                }      
            }
        }
        
    }
    
	if (avlble) {
        printf("'cord' is available in \n' %s '",str);
    }else
    {
        printf("'cord' is not available in \n' %s '",str);
    }
    
    
    
	return 0;
}


