#include<stdio.h>
#include<stdlib.h>



int strlen(char *s){
	int len = 0;
	while (*s++!='\0')
	{
		len++;
		
	}
	return len;
}

int main(argc,argv)
int argc;
char *argv[];
{
	if (argc !=2)
	{
		printf("wrong argument format");
		exit(1);
	}else
	{
		printf("%d",strlen(argv[1]));
	}
	
	
	
	return 0;
}
