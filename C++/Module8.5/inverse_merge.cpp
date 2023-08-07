#include <bits/stdc++.h>

using namespace std;

int inv = 0;
vector<int> merge(vector<int> sa, vector<int> sb)
{
    vector<int> sc;
    // int size = sa.size();
    while ((sa.size() > 0) && (sb.size() > 0))
    {
        if (sa.front() < sb.front())
        {
            sc.push_back(sa.front());
            sa.erase(sa.begin());
        }
        else
        {
            inv += (sa.size());
            sc.push_back(sb.front());

            sb.erase(sb.begin());
        }
    }
    while ((sa.size() > 0) || (sb.size() > 0))
    {
        if (sa.size() == 0)
        {
            sc.push_back(sb.front());
            sb.erase(sb.begin());
        }
        else
        {
            sc.push_back(sa.front());
            sa.erase(sa.begin());
        }
    }
    return sc;
}
vector<int> mergesort(vector<int> arr)
{
    if (arr.size() <= 1)
        return arr;

    int l = 0;
    int r = arr.size() - 1;
    int mid = (l + r) / 2;

    vector<int> a;
    vector<int> b;

    for (int i = 0; i <= mid; i++)
        a.push_back(arr[i]);

    for (int i = mid + 1; i <= r; i++)
        b.push_back(arr[i]);

    vector<int> sa = mergesort(a);
    vector<int> sb = mergesort(b);
    vector<int> sc = merge(sa, sb);

    return sc;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr;

    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    vector<int> arr1 = mergesort(arr);

    cout << inv << endl;


    return 0;
}
