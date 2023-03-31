#include <stdio.h>

solve(int arr[], int n, int s)
{
    if (n < 1)
    {
        printf("%d ", s);
        return 0;
    }
    else
    {
        s += arr[n - 1] % 10;
        return solve(arr, n - 1, s);
    }
}

int main()
{

    int n, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    solve(arr, n, sum);
    // printf("%d ", sum);

    return 0;
}