#include <stdlib.h>


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
#include<stdio.h>

int main()
{

    int rnd;
    scanf("%d",&rnd);

    for(int j =0 ; j<rnd ; j++)
    {   int n;
        scanf("%d",&n);
        char str[n];

        scanf("%s",str);
        int cnt=0;


        for( int i = 0; i<n-1; i++)
        {
            if(((str[i]=='0')&&(str[i+1]=='1'))
                    ||
                    ((str[i]=='1')&&(str[i+1]=='0')))
            {
                cnt++;
            }

        }
        printf("%d\n",cnt);
    }

    return 0;
}
