#include<stdio.h>

int main()
{
    int n, sum=0, flag=-1;
    scanf("%d",&n);

    for(int i=0, j=1; i<n; i++,j++)
    {
        if(i%3==0)
        {   flag*= -1;
            sum+=j*flag;
        }
        else
        {
            sum+=j*flag;
        }
    }
  printf(" %d ", sum);
    return 0;
}
