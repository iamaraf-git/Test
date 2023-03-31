#include<stdio.h>

int check ( int* parr, int* cnt, int* n)
{



    for(int i=0 ; i< *n ; i++)
    {
        while((*(parr+i)>0))
        {
            if((*(parr+i))% 10==7)
                *cnt+=1;
            *(parr+i)/=10;

        }


    }


    return *cnt;
}

int main()
{
    int n, cnt=0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0 ; i<n; i++)
        scanf("%d",&arr[i]);

    check (&arr, &cnt, &n);


    if((n%2==0)&&(n/2<=cnt))
        printf("Beautiful\n");

    else if((n%2==1)&& ((n/2)+1<=cnt))
        printf("Beautiful\n");

    else
        printf("Ugly\n");

    return 0;
}
