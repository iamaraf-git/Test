#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> sa, vector<int> sb)
{
    vector<int> sc;

    while ((sa.size() > 0) && (sb.size() > 0))
    {
        if (sa.front() > sb.front())
        {
            sc.push_back(sa.front());
            sa.erase(sa.begin());
        }
        else
        {
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> a;
    vector<int> b;

    int n;
    cin >> n;
    while (n--)
    {

        int num;
        cin >> num;
        a.push_back(num);
    }

    int m ;
    cin >> m;
    while (m--)
    {
        int num;
        cin >> num;
        b.push_back(num);
    }
    vector<int> ans = merge(a, b);

    for (int x : ans)
        cout << x << " ";
    return 0;
}