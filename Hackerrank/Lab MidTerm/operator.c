#include<stdio.h>

int main()
{

    char ch[20];
    int num1, num2, sum=0, tot=0;

    scanf("%s", &ch);
    scanf("%d %d", &num1,&num2);

    int size= strlen(ch);

    for( int i=0 ; i< size ; i++)
    {

        if(ch[i]== '+')
        {
            sum= num1+ num2;
        }
        else
        {
            sum= num1*num2;
        }
        tot += sum;

    }

    printf("%d\n",tot);


    return 0;
}
