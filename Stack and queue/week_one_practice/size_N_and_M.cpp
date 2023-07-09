#include <bits/stdc++.h>

using namespace std;

class myStac
{
public:
    list<int> s;
    void push(int v)
    {
        s.push_back(v);
    }
    void pop()
    {
        s.pop_back();
    }
    int top()
    {
        return s.back();
    }
    int size()
    {
        return s.size();
    }
    bool empty()
    {
        if (s.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStac a;
    myStac b;
    int n, m;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        a.push(x);
    }

    cin >> m;
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
        for (int i = 0; i < a.size(); i++)
        {
            if (a.top() != b.top())
            {
                flag = false;
            }
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