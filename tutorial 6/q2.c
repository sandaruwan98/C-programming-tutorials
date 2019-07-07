#include <stdio.h>



int main(){
	int m1[3][3], m2[3][3] , m3[3][3];
	printf("Enter operater(+,-,*) = ");
	char op;
	scanf("%c",&op);
	printf("Enter Matrix 1\n");
	scanf("%d %d %d",&m1[0][0],&m1[0][1],&m1[0][2]);
	scanf("%d %d %d",&m1[1][0],&m1[1][1],&m1[1][2]);
	scanf("%d %d %d",&m1[2][0],&m1[2][1],&m1[2][2]);
	
	printf("Enter Matrix 2\n");
	scanf("%d %d %d",&m2[0][0],&m2[0][1],&m2[0][2]);
	scanf("%d %d %d",&m2[1][0],&m2[1][1],&m2[1][2]);
	scanf("%d %d %d",&m2[2][0],&m2[2][1],&m2[2][2]);
	
	
//	printf("\n");
	
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			switch (op)
			{
				case '-' :
					m3[i][j] = m1[i][j] - m2[i][j];
					break;
				case '+' :
					m3[i][j] = m1[i][j] + m2[i][j];
					break;
				case '*' :
					//m3[i][j] = m1[i][j] * m2[i][j];
					break;
			}
			
		}	
	}
	
	for(i=0;i<3;i++)
	{
			
		for(j=0;j<3;j++)
		{
			printf(" %d\t",m3[i][j]);
		}	
			printf("\n");   
	}
	
	
	
	return 0;
}
