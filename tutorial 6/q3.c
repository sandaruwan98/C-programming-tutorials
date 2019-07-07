#include <stdio.h>

 double total(double a[3][5]){
     int i,j;
     double total=0.0;
     for( i = 0; i <3; i++)
     {  
        for( j = 0; j <5; j++)
            {   
                total+=a[i][j];
            }     
     }
     return total;
 }

double average(double a[3][5]){
    return total(a)/15;
}

double max(double a[3][5]){
    double max = a[0][0];
    int i,j;
     
     for( i = 0; i <3; i++)
     {  
        for( j = 0; j <5; j++)
            {   
                if (max < a[i][j]) {
                    max = a[i][j];
                }
                
            }     
     }
    return max ;
}

double min(double a[3][5]){
     double min = a[0][0];
    int i,j;
     
     for( i = 0; i <3; i++)
     {  
        for( j = 0; j <5; j++)
            {   
                if (min > a[i][j]) {
                    min = a[i][j];
                }
                
            }     
     }
    return min ;
}

int occurence(double d,double a[3][5]){
    int i,j,count = 0;
    for( i = 0; i <3; i++)
    {  
    for( j = 0; j <5; j++)
        {   
            if (d == a[i][j]) {
                count++;
            }
            
        }     
    }
    return count;
}



double maxappear(double a[3][5]){
     int i,j,count[3][5]  ,i1=0,j1=0;

     
     for( i = 0; i <3; i++)
     {  
        for( j = 0; j <5; j++)
            {   
               count[i][j] = occurence(a[i][j],a);
            }     
     }

    double max = count[0][0];
     for( i = 0; i <3; i++)
     {  
        for( j = 0; j <5; j++)
            {   
                if (max < count[i][j]) {
                    max = count[i][j];
                    i1 = i;
                    j1 = j;
                }
                
            }     
     }

     return a[i1][j1];
 }


int main (){
	
    double arr[3][5];

   arr[0][0] = 34.5;
   arr[0][1] = 15.7;
   arr[0][2] = 12.6;
   arr[0][3] = 98.4;
   arr[0][4] = 54.21;
   arr[1][0] = 89.55;
   arr[1][1] = 34.5;
   arr[1][2] = 34.5;
   arr[1][3] = 34.5;
   arr[1][4] = 34.5;
   arr[2][0] = 34.5;
   arr[2][1] = 34.5;
   arr[2][2] = 34.5;
   arr[2][3] = 34.5;
   arr[2][4] = 34.5;

   
    printf("%lf",maxappear(arr));
    printf("\n%lf",total(arr));
	
	
	return 0;
}


