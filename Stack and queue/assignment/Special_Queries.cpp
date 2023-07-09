#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<string> a;
    int n;
    cin >> n;
    while (n--)
    {
        int command;
        cin >> command;
        string name;
        if (command == 0)
        {
            cin >> name;
            a.push(name);
        }
        else if (command == 1)
        {

            if (a.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << a.front() << endl;
                a.pop();
            }
        }
    }

    return 0;
}