# include <stdio.h>
int strcmp ( char * , char * ) ;
int main(void)
{
	char *S1 = "yyi kanka" ;
	char *S2 = "Sri Lanka" ;
	printf("%d\n", strcmp( S2 , S1 ) ) ;
}

int strcmp ( char *S1 , char *S2 )
	{
		while( *S1 && *S2 )
		{
			S1++ ;
			S2++ ;
		}
		return ( *S1- *S2 ) ;
	}