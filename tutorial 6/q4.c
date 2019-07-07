#include <stdio.h>
#include <string.h>
# define MAXSIZE 100

 // Declaring the maximum size of the stack 
char stack[MAXSIZE];   
int top = -1;



char peek(){			// peek function to display the top element of the stack
	return stack[top];
}

int isFull(){		// isFull function to check whether the stack is full or not 
	if(top==MAXSIZE)
		return 1;
	else
		return 0;
}

int isEmpty(){		// isEmpty function to check whether the stack is empty or not 
	if(top==-1)
		return 1;
	else
		return 0;
}

char pop(){			//pop function to delete the top element of the stack 
	if(!isEmpty()){
		char value;
		value = stack[top];
		top =  top -1;
		return value;
	}
	else
		printf("Stack is empty, cannot pop elements\n");
}

void push(char item)
{ // push function to insert elements into the stack
	if(!isFull()){
		top = top + 1;
		stack[top] = item;
	}
	else
		printf("Stack is full, cannot insert more...\n");
	}
// --------------------------------------------------  MAIN  -----------------------------------------------------------
int main (){
    printf("Enter a string : ");
    char str[MAXSIZE];
    scanf("%[^\n]s",str);
    int i;
    
	for( i = 0; i < strlen(str); i++)
    {
        push(str[i]);
    }
    for( i = 0; i < strlen(str); i++)
    {
        str[i] = pop();
    }
	
    printf("Reversed Dtring is : %s",str);
	return 0;
}


