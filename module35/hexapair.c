
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include<stdio.h>

int gcd(int a, int b)
{
    if(a>b)
    {
        int temp =a;
        a=b;
        b= temp;
    }
    int flg;
    for(int i= a; i>0; i--)
    {   flg=0;
        if((a%i==0)&&(b%i==0))
        {


            //flg=1;
            return i;
            //break;
        }

    }
   // if(flg==0)
        return 1;

}
int solve()
{
    int n,cnt=0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n ; i++)
        scanf("%d",&arr[i]);

    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<n ; j++)
        {

            if(arr[i]!=arr[j])
            {

                if(gcd(arr[i],arr[j])==1)
                    cnt++;

            }
        }
    }


    printf("%d", cnt);
    return 0;
}



int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0; i<t ; i++)
        {
        solve();

        printf("\n");
}
    return 0;
}
