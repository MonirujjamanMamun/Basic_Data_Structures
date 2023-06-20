#include <bits/stdc++.h>

using namespace std;

int main()
{

    // vector<int> v; type one
    // vector<int> v(5); type two
    // vector<int> v(5, 7); type three
    // vector<int> v2(5, 8); type four
    // vector<int> v(v2); type four
    // int a[5] = {1, 2, 3, 4, 5}; type five
    // vector<int> v(a, a + 5); type five
    vector<int> v = {1, 2, 3, 4, 5, 6}; // type six

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    return 0;
}