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

void insert(int val,int pos){
    int i;
    for( i = pos; i < 10; i++)
    {
        int temp = nums[i+1];
        nums[i+1] = nums[i];

    }
    nums[pos] = val;
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

	
    for( i = 0; i < 10; i++)
    {
		printf("%d ",nums[i]);
        
	}
	return 0;
}


