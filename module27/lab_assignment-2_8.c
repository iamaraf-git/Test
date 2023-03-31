#include<stdio.h>

void check ( int *parr, int* n, int* ev_cnt, int* p_cnt, float* avg)
{

    float sum;

    for(int i=0 ; i< *n ; i++)
    {   int flag =0;
        for(int j=2 ; j<= *(parr+i)/2; j++)
        {
            if(*(parr+i)% j ==0)
            {
                flag =1;
            }
        }
        if(flag==0 && *(parr+i)!=1&& *(parr+i)!=0)
        {
            *p_cnt +=1;
        }


        if(*(parr+i)%2==0)
        {
            *ev_cnt +=1;
            sum += *(parr+i);
        }
    }

    *avg =(sum/ *ev_cnt );
}



int main()
{
    int n, ev_cnt=0, p_cnt=0;
    float avg=0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0 ; i<n; i++)
        scanf("%d",&arr[i]);

    check (&arr,&n,&ev_cnt, &p_cnt, &avg);

    printf("Prime numbers: %d\nAverage of all even integers: %.2f", p_cnt, avg);

    return 0;
}



