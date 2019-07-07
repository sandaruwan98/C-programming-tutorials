# include <stdio.h>
# include <string.h>
# define MAX 100

void main(void)
{
char C = 'a' , *p , S[MAX] ;
p = &C ;
strcpy( S , "ABC" ) ;
printf("%c%c%c\n", *S , *p+1 , *p+2 ) ;

printf("%s %c %c %s\n", S , *S+6 , *S+7 , S+1 ) ;
}