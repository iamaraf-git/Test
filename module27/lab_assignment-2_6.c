#include<stdio.h>

is_divided_3(int arr[], int n, int* cnt3)

{
    for(int i=0 ; i<n ; i++)
    {
        if((arr[i]%3==0))
            *(cnt3) +=1;

    }

}

is_divided_5(int arr[], int n, int* cnt5)

{
    for(int i=0 ; i<n ; i++)
    {
        if((arr[i]%5==0)&&(arr[i]%3 !=0))
            *(cnt5) +=1;

    }

}



int main()
{
    int n;

    scanf("%d",&n);
    int arr[n];

    for(int i=0 ; i<n ; i++)
        scanf("%d", &arr[i]);

    int cnt3 =0, cnt5=0;
    is_divided_3(arr, n, &cnt3 );

    is_divided_5(arr, n, &cnt5 );


    if( (cnt3 + cnt5) >0)
        printf("%d", cnt3+cnt5 );

    else
        printf("-1");

    return 0;
}

