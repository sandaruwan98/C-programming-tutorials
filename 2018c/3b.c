#include<stdio.h>
#include<stdlib.h>



char* strconcat(char *a,char *b){
	int len = 0;
	char *c ;
	c=a;
	while (*a)
	{a++;}
	//printf("%c",*a);
	
	*a = ' ';
	a++;
	while (*a++ = *b++)
	{}
	
	
	return c;
}

int main(argc,argv)
int argc;
char *argv[];
{
	if (argc < 3)
	{
		printf("wrong argument format");
		exit(1);
	}else
	{
		printf("%s",strconcat(argv[1],argv[2]));
	}
	
	
	
	return 0;
}
