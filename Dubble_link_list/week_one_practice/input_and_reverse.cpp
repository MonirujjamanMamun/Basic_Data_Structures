#include <bits/stdc++.h>

using namespace std;

int main()
{

    list<int> listArr;
    int a;
    while (true)
    {
        cin >> a;
        if (a == -1)
            break;
        listArr.push_back(a);
    }
    listArr.sort();
    listArr.reverse();
    for (int a : listArr)
    {
        cout << a << " ";
    }
    return 0;
}