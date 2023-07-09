#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> a;
    queue<int> b;
    int n, m;
    cin >> n >> m;
    while (n--)
    {
        int x;
        cin >> x;
        a.push(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        b.push(x);
    }
    bool flag = true;
    if (a.size() != b.size())
    {
        flag = false;
    }
    else
    {
        while (!a.empty())
        {
            if (a.top() != b.front())
            {
                flag = false;
            }
            a.pop();
            b.pop();
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}