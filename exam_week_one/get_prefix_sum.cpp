#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    long long arr[n];
    long long prev[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    prev[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prev[i] = arr[i] + prev[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << prev[i] << " ";
    }
    return 0;
}