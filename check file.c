#include <stdio.h>



void main()

{

    FILE *fptr;

    char name[20];

    int age[5],i;

    float salary[5];



    /*  open for writing */

    fptr = fopen("emp.txt", "a");



    if (fptr == NULL)

    {

        printf("File does not exists \n");

        return;

    }

    printf("Enter the name \n");

    scanf("%s", name);

    fprintf(fptr, "Name    = %s\n", name);


for(i=0;i<5;i++)
{
    printf("Enter the age\n");
    scanf("%d", &age[i]);

    fprintf(fptr, "Age     = %d\n", age[i]);

    printf("Enter the salary\n");

    scanf("%f", &salary[i]);
    printf("age =  %d\n ", age[i]);





    printf("salary = %f\n", salary[i]);

    fprintf(fptr, "Salary  = %.2f\n", salary[i]);
}


    fclose(fptr);

}
