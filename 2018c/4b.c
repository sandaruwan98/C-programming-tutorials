#include<stdio.h>
#include<stdlib.h>


int isPrime(int n){
	int i = 2;
	int prime = 1;
	while (i<n-1)
	{
		if (n%i == 0)
		{
			prime =0;
			break;
		}
		i++;
		
	}
	return prime;
	
}
int main(argc,argv)
int argc;
char *argv[];
{
	if (argc == 1)
	{
		printf("wrong argument format");
		exit(1);
	}
	int i =1;
	while (argc > i)
	{
		if (isPrime(atoi(argv[i])))
			printf("%s is prime\n",argv[i]);
		else
			printf("%s is not prime\n",argv[i]);
		i++;
	}
	

	return 0;
}
