#include <stdio.h>
#include <string.h>

int nums[10],last = 9;


void swap(int max){
	int temp = nums[last];
	nums[last] = nums[max];
	nums[max] = temp;
    last--;
}

int max(){
    int i,max = nums[0],j=0;
    
    for( i = 0; i <= last ; i++)
    {
        if (max < nums[i]) {
            max = nums[i];
            j= i;
        }
        
    }
    return j;
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
		swap(max());
        
	}
	printf("Sorted numbers : ");
    for( i = 0; i < 10; i++)
    {
		printf("%d ",nums[i]);
        
	}
	return 0;
}


