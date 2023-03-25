#include<stdio.h>

int main()
{

    FILE* inputFile = fopen("in.txt","r");
    FILE* outputFile = fopen("out.txt","w");

    if (inputFile == NULL)
    {
        printf("Not Found");
        return 0;

    }

    int a,b;
    fscanf(inputFile,"%d%d", &a,&b);
    fprintf(outputFile,"%d",a+b);


    return 0;

}
