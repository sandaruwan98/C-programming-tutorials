#include <stdio.h>
#include <string.h>

double nums[10];

void swap(int a,int b){
	double temp = nums[b];
	nums[b] = nums[a];
	nums[a] = temp;
    
}

// --------------------------------------------------  MAIN  -----------------------------------------------------------
int main (){
//---------------------get input ----------------------
    int i,j;
	
	

	 for( i = 0; i < 10; i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%lf",&nums[i]);
	}

//---------------------- bubble sort -------------------------
     
    for( i = 0; i < 10; i++)
    {
		for( j = 0; j < 10; j++)
        {
            if (nums[i] < nums[j]) {
                
                swap(i,j);
            }
            
        }
        
        
	}
    // -------------------print -------------------------------
	printf("Sorted numbers : ");
    for( i = 0; i < 10; i++)
    {
		printf("%lf ",nums[i]);
        
	}
	return 0;
}


