#include<stdio.h>

int main()
{
    //printf("Hello world!");
    int n, max=0;
    scanf("%d",&n);
    char arr[n];
    scanf("%s", arr);
    int sq=1;
    for(int i=0; i<n; i++)
    {


        if(arr[i]==arr[i+1])
        {
            sq++;
            if(max<sq)
            {   max=sq;
            }

        }

        else
        {
            sq=1;
           // sq++;

            if(max<sq)
                max=sq;
        }

    }
    printf("%d",max);
    return 0;
}

