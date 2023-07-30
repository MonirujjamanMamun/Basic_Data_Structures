// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     priority_queue<int, vector<int>, greater<int>> pq;
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         int x;
//         cin >> x;
//         pq.push(x);
//     }

//     while (!pq.empty())
//     {
//         cout << pq.top() << " ";
//         pq.pop();
//     }

//     // while (true)
//     // {
//     //     int n;
//     //     cin >> n;
//     //     if (n == 0)
//     //     {
//     //         int x;
//     //         cin >> x;
//     //         pq.push(x);
//     //     }
//     //     else if (n == 1)
//     //     {
//     //         pq.pop();
//     //     }
//     //     else if (n == 2)
//     //     {
//     //         cout << pq.top() << endl;
//     //     }
//     //     else
//     //     {
//     //         break;
//     //     }
//     // }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{

    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}