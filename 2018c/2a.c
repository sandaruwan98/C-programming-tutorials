#include<stdio.h>
#include<stdlib.h>

#define SIZE  7

struct StudentRec{
int long StudentNumber;
char StudentName[20];
int StudentMark;
int StudentRank;
}StudDB[SIZE]={

{123456, "Miley", 20, 0},
{124687, "Taylor", 37, 0},
{154321, "Justin", 48, 0},
{135412, "Avril", 95,0},
{136123, "Amy", 88,0},
{145671, "Jane", 55, 0},
{143582, "Celine", 90, 0}};

int main(){
	int i,j,max=0,maxpos =0,r=1,tpos=0;
	for ( i = 0; i < SIZE; i++)
    {
        


        for ( j = 0,max = 0; j < SIZE; j++)
        {

            if (max<StudDB[j].StudentMark && StudDB[j].StudentRank == 0)
            {
                max = StudDB[j].StudentMark;
                maxpos = j;
            }
            
        }
        
        StudDB[maxpos].StudentRank =  i+1;
    }
    
	for ( i = 0; i < SIZE; i++)
        {
            printf("%ld\t %s\t %d\t %d\n",StudDB[i].StudentNumber,StudDB[i].StudentName,StudDB[i].StudentMark,StudDB[i].StudentRank);
        }
	
	
	return 0;
}
