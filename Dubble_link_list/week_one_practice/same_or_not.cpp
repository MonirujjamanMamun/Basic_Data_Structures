#include <bits/stdc++.h>

using namespace std;

int main()
{

    list<int> arrList1;
    list<int> arrList2;
    int a;
    while (true)
    {
        cin >> a;
        if (a == -1)
            break;
        arrList1.push_back(a);
    }
    int b;
    while (true)
    {
        cin >> b;
        if (b == -1)
            break;
        arrList2.push_back(b);
    }
    int flag = 1;
    if (arrList1.size() != arrList2.size())
    {
        flag = 0;
    }
    else
    {
        auto it1 = arrList1.begin();
        auto it2 = arrList2.begin();
        while (it1 != arrList1.end() && it2 != arrList2.end())
        {
            if (arrList1 != arrList2)
            {
                flag = 0;
            }
            it1++;
            it2++;
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