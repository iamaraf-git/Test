#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >>m;
    vector <int> arr(m);



    for(int i=0; i<arr.size(); i++)
        cin >> arr[i];



    int n;
    cin >>n;
    vector <int> arr1(n);
    for(int i=0; i<arr1.size(); i++)
        cin >> arr1[i];



    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr1.size(); j++)
        {
            if(arr[i]==arr1[j])
                cout << arr1[j] <<" ";
        }
    }



    return 0;
}




