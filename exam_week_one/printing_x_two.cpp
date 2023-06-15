#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int back = n / 2;
    int ford = n - 1, space = n - 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < back; j++)
        {
            cout << "\\";
        }
        for (int j = space; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = ford; j > 0; j--)
        {
            cout << "/";
        }
        back++;
        space -= 2;
        ford--;
        cout << endl;
    }
    return 0;
}