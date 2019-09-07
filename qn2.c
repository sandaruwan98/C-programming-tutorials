# include <stdio.h>
# include <string.h>
int student[50];

void swap(int *a,int *b);
void bublesort();
void insertionsort();
void selectionsort();


int main(){

int i,c;
  for (i = 0; i < 50; i++) {
    student[i] = rand() % 100 + 1;
    printf("%d\n", student[i]);
  }

  printf("Enter your choice\n");
  printf("1. Bubble Sort  \n");
  printf("2. For Selection Sort  \n");
  printf("3. Insertion sort   \n");
  scanf("%d",&c);

  switch (c)
  {
  case 1:
      bublesort();
      break;
  case 2:
      selectionsort();
      break;
  case 3:
      insertionsort();
      break;
  
  default:
      printf("Wrong choice  \n");
      break;
  }

 for (i = 0; i < 50; i++) {
    printf("%d\n", student[i]);
  }


    printf("Enter your choice\n");
    printf("1. The students who achieved HD  \n");
    printf("2. The students who achieved D  \n");
    printf("3. The students who achieved C  \n");
    printf("4. The students who achieved P  \n");
    printf("5. The students who achieved N  \n");

    scanf("%d",&c);
    int m1,m2;

    switch (c)
    {
    case 1:
        m1 = 100;
        m2 = 80;
        printf("\nThe students who achieved HD  \n");

        break;
    case 2:
        m1= 80;
        m2 = 70;
        printf("\nThe students who achieved D  \n");
        break;
    case 3:
        m1=70;
        m2 = 60;
        printf("\nThe students who achieved C  \n");
        break;
    case 4:
        m1=60;
        m2 = 50;
        printf("\nThe students who achieved P  \n");
        break;
    case 5:
        m1=50;
        m2 = 0;
        printf("\nThe students who achieved N  \n");
        break;
    default:
        printf("Wrong choice  \n");
        break;
    }

    for (i = 0; i < 50; i++) {
        if (m1 >= student[i] && m2 < student[i] )
        {
            printf("%d\n", student[i]);
        }
        


       
  }

}

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bublesort(){
    int i,j;
    for ( i = 0; i < 49; i++)
    {
        for ( j = 0; j < 49; j++)
        {
            if (student[i]>student[i+1])
            {
                swap(&student[i],&student[i+1]);
            }
            
        }
        
    }
    
}

void selectionsort(){
    int i =0,j=0;

}

void insertionsort(){
    int i =0,j=0;

}