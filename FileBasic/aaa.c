#include<stdio.h>

int main()
{
    FILE* logFile = fopen("log.txt", "a");
    FILE* inputFile = fopen("in.txt","r");
    FILE* outputFile = fopen("out.txt","w");

    if (inputFile == NULL)
    {
        printf("Not Found");
        fprintf(logFile,"Not Found\n");

        return 0;

    }

    int a,b;
    fscanf(inputFile,"%d%d", &a,&b);
    fprintf(outputFile,"%d",a+b);


    return 0;

}
