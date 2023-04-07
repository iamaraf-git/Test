#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, mul=1;
    cin>> n;
    vector <int> a(n);
    for(int i=0,cnt=0; i<n; i++,cnt++)
    {   cin>> a[i];
        if(cnt%2==1)
            mul*= a[i];
    }

    cout << mul;
    return 0;
}
