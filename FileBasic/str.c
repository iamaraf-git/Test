#include<stdio.h>
int main()
{

    FILE* inputFile = fopen("strin.txt","r");
    FILE* outputFile = fopen("out.txt", "w");

    while(1)
    {
        char ch = fgetc(inputFile);
        if (ch==EOF)
            break;

        printf("%c",ch);
        fputc(ch,outputFile);
    }

}
