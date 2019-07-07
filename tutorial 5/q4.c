#include <stdio.h>
#include <string.h>
#include <math.h>
int a,b,c;

void roots(){
	double x = b*b - 4*a*c;
	double root1,root2;
	if (x>=0) {
		printf("The roots of a quadratic polynomial are real.\n");
		root1 = (-b + sqrt(x))/(2*a);
		root2 = (-b - sqrt(x))/(2*a);

	printf("The roots of the formula = %lf or %lf\n",root1,root2);
	}else
	{
		printf("The roots of a quadratic polynomial are complex.\n");
		printf("Therefore no roots.\n");
	}
	
	
}


int main (){
	
	printf("Enter formula(ax2+bx+c) : ");
	scanf("%dx2+%dx+%d",&a,&b,&c);
	printf("%dx2+%dx+%d",a,b,c);
	roots();

	
	
	return 0;
}

