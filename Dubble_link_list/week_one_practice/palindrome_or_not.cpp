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

    auto head = listArr.front();
    auto tail = listArr.back();
    while (head == tail)
    {
        if (head != tail)
        {
            cout << "Not palindrome" << endl;
            break;
        }
        else
        {
            cout << "palindrome" << endl;
        }
        head++;
        tail--;
    }

    for (int a : listArr)
    {
        cout << a << " ";
    }

    return 0;
}