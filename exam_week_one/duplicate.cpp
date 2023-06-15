// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     long long n;
//     cin >> n;
//     long long arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int flag = 0;
//     int agist;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             cout << arr[i] << ":" << arr[j] << endl;
//             // cout << arr[j] <<endl;
//         }
//         cout << endl;
//     }
//     // if (flag)
//     // {
//     //     cout << "YES" << endl;
//     // }
//     // else
//     // {
//     //     cout << "No" << endl;
//     // }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}