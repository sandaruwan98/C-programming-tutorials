#include <stdio.h>

int power2n(int n){
    int p =1,i=0;
    while(i<n){
        p*=2;
        i++;
    }
    
    return p;
}

int sumofpower2n(int n1,int n2){
    int i,sum =0;
       for( i = n1+1; i < n2; i++)
       {
           sum+=power2n(i);
       }
       return sum;
        
    }
    


int main (){
	int n1,n2;
	printf("Enter first num : ");
	scanf("%d",&n1);
	printf("Enter last num : ");
	scanf("%d",&n2);
	
    printf("Sum the powers 2n of all integers n between two given numbers is %d",sumofpower2n(n1,n2) );


	return 0;
}


