#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        map<int, int> mp;
        int maxCount = 0;
        int maxValue = arr[0];

        for (int num : arr)
        {
            mp[num]++;
            if (mp[num] > maxCount)
            {
                maxCount = mp[num];
                maxValue = num;
            }
            else if (mp[num] == maxCount)
            {
                maxValue = max(maxValue, num);
            }
        }
        cout << maxValue << " " << maxCount << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// std::pair<int, int> findMostFrequentValue(const std::vector<int> &arr)
// {
//     std::map<int, int> freqMap;
//     int maxCount = 0;
//     int mostFrequentValue = arr[0];

//     for (int num : arr)
//     {
//         freqMap[num]++;
//         if (freqMap[num] > maxCount)
//         {
//             maxCount = freqMap[num];
//             mostFrequentValue = num;
//         }
//         else if (freqMap[num] == maxCount)
//         {
//             mostFrequentValue = std::max(mostFrequentValue, num);
//         }
//     }

//     return std::make_pair(mostFrequentValue, maxCount);
// }

// int main()
// {
//     int t;
//     std::cin >> t;
//     while (t--)
//     {
//         int N;
//         std::cin >> N;

//         std::vector<int> A(N);
//         for (int i = 0; i < N; ++i)
//         {
//             std::cin >> A[i];
//         }

//         std::pair<int, int> result = findMostFrequentValue(A);
//         std::cout << result.first << " " << result.second << std::endl;
//     }
//     return 0;
// }
