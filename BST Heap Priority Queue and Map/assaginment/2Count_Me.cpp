// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         // for (int i = 0; i < n; i++)
//         // {
//         //     cout << v[i] << " ";
//         // }
//         map<int, int> mp;
//         int maxCount = 0;
//         int maxValue = v[0];
//         for (int num : v)
//         {
//             mp[num]++;
//             if (mp[num] > maxCount)
//             {
//                 maxCount = mp[num];
//                 maxValue = num;
//             }
//             else if (mp[num] == maxCount)
//             {
//                 maxValue = max(maxValue, num);
//             }
//         }
//         cout << maxValue << " " << maxCount << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        map<int, int> mp;
        int count = 0;
        int value = v[0];
        for (int num : v)
        {
            mp[num]++;
            if (mp[num] > count)
            {
                count = mp[num];
                value = num;
            }
            else if (mp[num] == count)
            {
                value = max(value, num);
            }
        }
        cout << value << " " << count << endl;
    }

    return 0;
}