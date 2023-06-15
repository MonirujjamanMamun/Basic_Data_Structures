#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m, indx;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cin >> indx;
    a.insert(a.begin() + indx, b.begin(), b.end());
    for (int i = 0; i < n + m; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}