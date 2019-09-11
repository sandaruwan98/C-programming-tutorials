#include<stdio.h>
#include<stdlib.h>


int main(argc,argv)
int argc;
char *argv[];
{
	if (argc != 2)
	{
		printf("wrong argument format");
		exit(1);
	}
	FILE *in = fopen(argv[1],"r");
	int ch =0,w=0,l=0;
	char c;
	while ((c=getc(in)) != EOF)
	{
		if ( c!= '\n')
			ch++;
		if (c==' ' || c== '\n')
			w++;
		if ( c== '\n')
			l++;
		
	}

	printf("Characters = %d\n Words = %d\n lines = %d\n",ch,w+1,l+1);
	return 0;
}
