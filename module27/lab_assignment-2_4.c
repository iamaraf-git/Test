#include<stdio.h>
void solve ()
{
    int n,  arr[8];
    scanf("%d",&n);
    int flag =-1;

    if((n-4)%8==0)
    {
        if(flag==-1)
        {   flag *=-1;
            for(int i=1 ; i<4 ; i++)
            {
                arr[3-i] = (n/4)-i;
            }
        }
        if(flag==1)
        {   for(int i=1 ; i<4 ; i++)
            {
                arr[3+i] = (n/4)+i;
            }
        }
        for(int i=0 ; i<8 ; i+=2)
            printf(" %d", arr[i]);

        printf("\n");
    }
}
int main()
{
    int  t ;
    scanf("%d",&t);

    for(int i=0 ; i<t; i++)
        solve();
    return 0;
}

