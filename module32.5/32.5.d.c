#include<stdio.h>

solve(int n)
{

    if(n<1) return 0;
    else
    {
        printf("%d ",n);
        return solve(n-1);

    }
}

int main()
{

    int n ;
    scanf("%d",&n);

    solve(n);

    return 0;
}