#include <stdio.h>
#include <string.h>
int months[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

void showBday(int id){
    char gen[7];
    int y,md,m=0,d;
    y = id/10000000;
    md = (id/10000)-(y*1000);
    

    if (md>500) {
        strcat(gen,"Female");
        md-=500;
    }  
    else
        strcat(gen,"Male");

    while(md>0){ 
       
        md-=(months[m]);
        m++;
    }
    
    d = months[m-1] + md;
    printf("Your gender is%s \nYour birthday is 19%d/%d/%d",gen,y,m ,d);
}

int main (){
    
	int id;
	printf("Enter your ID numer : ");
	scanf("%d",&id);

    if(id> 100000000)
        showBday(id);
    else
        printf("ID you enterwd is invalid");
    
    
    
	
    
	
	
	return 0;
}


