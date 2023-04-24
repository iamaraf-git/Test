
#include<stdio.h>

int main()
{
    int r, c, a[100][100], i, j;

    scanf("%d%d", &r,&c);

    for(i=0; i<r; ++i)
    {   for(j=0; j<c; ++j)
        {

            scanf("%d",&a[i][j]);
        }
        //printf("\n");
    }

    for(i=0; i<r; i++)
    {   for(j=0; j<c; j++)
        {
            if((a[i][j]==i+1)&&(a[i][j]==j+1))
                a[i][j] +=3;


            else if((a[i][j]==i+1))
                a[i][j] +=2;

            else if((a[i][j]==j+1))
                a[i][j] +=1;
        }
    }

    for(i=0; i<r; i++)
    {   for(j=0; j<c; j++)
        {

            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
