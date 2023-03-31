#include<stdio.h>

void swap( int arr[], int n, int l, int r )
{

    int temp = 0;
    temp = *(arr+l) ;
    *(arr+l) =  *(arr+r);
    *(arr+r) = temp ;


}


int main()
{
    int n, q, l, r;

    scanf("%d",&n);
    int arr[n+1];

    for(int i=1 ; i<n+1 ; i++)
        scanf("%d", &arr[i]);

    scanf("%d",&q);
    for(int i=0 ; i<q ; i++)
    {
        scanf("%d%d",&l,&r);

        swap( arr, n+1, l, r );
    }

    for(int i=1 ; i<n+1 ; i++)
        printf(" %d", arr[i]);

    return 0;
}

