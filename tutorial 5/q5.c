#include <stdio.h>
#include<conio.h>

int main (){

	int ov;
	float crr;
	
	printf("Enter current RR : ");
	scanf("%f",&crr);
	printf("Enter number of overs : ");
	scanf("%d",&ov);
	printf("Predicted Scores for current RR : %d\n",(int) (crr*ov)  );
	printf("Predicted Scores when RR = 7 : %d\n", 7*ov  );
	printf("Predicted Scores when RR = 8 : %d\n", 8*ov  );
	printf("Predicted Scores when RR = 9 : %d\n", 9*ov  );
	return 0;
}


