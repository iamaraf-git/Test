#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int x, int arr[])
{
   int tmp=0;
    for(int i =0 ; i<x ; i++)
  {
    for(int j =0 ; j<x-1 ; j++)
      {

        if( arr[j]>arr[j+1])
         {
           swap(&arr[j],&arr[j+1]);
         }

       }
    }
}



int main()
{     int num,k;
        scanf("%d",&num);
        int arr[num];
        for(int i =0 ; i<num ; i++)
        scanf(" %d",&arr[i]);

        sort(num,arr);//sorting

     for(int i =0 ; i<num ; i++)
         printf(" %d",arr[i]);
        return 0;
}

