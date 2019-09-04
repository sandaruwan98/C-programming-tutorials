# include <stdio.h>
# include <string.h>
void print(char c , void (*pfunc)(char* ));
void iprt(char* p);
void cprt(char* p);


int main()
{
    char c;
    c = getchar();
    print(c,iprt);
    print(c,cprt);
        
    
    




return 0;
}

void print(char c , void (*pfunc)(char*)){
    (*pfunc)(&c);
}

void iprt(char* p){ 
    printf("%d\n",*p);
}

void cprt(char* p){
    printf("%c\n",*p);
}