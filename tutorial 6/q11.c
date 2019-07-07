#include <stdio.h>
#include <string.h>

int nums[10],dnums[10];

int isDistinct(int x){
    int i = 0;
    while(dnums[i] != '\0')
    {
		if (x == dnums[i]) {
            return 0; 
        }
        
        i++;
	}

    return 1;
    
}

// --------------------------------------------------  MAIN  -----------------------------------------------------------
int main (){
//---------------------get input ----------------------
    int i,j =0;
	
	

	 for( i = 0; i < 10; i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&nums[i]);
	}

//---------------------- process -------------------------
     
    for( i = 0; i < 10; i++)
    {
		if (isDistinct(nums[i])) {
            dnums[j] = nums[i];
            j++;
        }
        
	}
	printf("Distinct numbers : ");
    i=0;
	while(dnums[i] != '\0')
    {
        printf("%d  ",dnums[i]);
        i++;
	}
        
    
	return 0;
}


