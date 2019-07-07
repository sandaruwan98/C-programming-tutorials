# include <stdio.h>
# include <stdlib.h>

struct employee{
    char name[30];
    int eno;
    float salary;
    int  OT;
}emp[4];

int main()
{
    FILE *in;
    in = fopen("data.txt","r");
    int i =0;
    while (i<4)
    {
        fscanf(in,"%s",emp[i].name);
        fscanf(in,"%d",&emp[i].eno);
        fscanf(in,"%f",&emp[i].salary);
        fscanf(in,"%d",&emp[i].OT);

        float nslry = 1.35*emp[i].salary + emp[i].OT*15;
        printf("Name : %s\nSalary : %f\nOT : %d\nNet salary : %f\n\n",emp[i].name,emp[i].salary,emp[i].OT,nslry);

        i++;
    }
    
    fclose(in);
    system("pause");
return 0;

}
