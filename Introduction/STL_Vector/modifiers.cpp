#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    vector<int> v2;
    v2.assign(v.begin(), v.begin() + 7);

    for (int a : v2)
    {
        cout << a << " ";
    }
    return 0;
}