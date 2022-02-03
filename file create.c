#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *file1;
    int ab[20],i;
    file1=fopen("text.txt","a");
    if(file1==NULL)
    {
        printf("file does not exist\n");
    }
    else
        {
        printf("file is open\n");

        for(i=0;i<20;i++)
        {

    scanf("%d",&ab[i]);
        }
        for(i=0;i<20;i++)
        {

        printf("%d",ab[i]);
        }
        for(i=0;i<20;i++)
        {
        fputs(ab[i],file1);
        }
        fputs("\n",file1);
        fclose(file1);
        }

}
