
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     // priority_queue<int, vector<int>, greater<int>> pq;
//     set<int> s;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         // pq.push(x);
//         s.insert(x);
//     }

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int m;
//         cin >> m;
//         if (m == 0)
//         {
//             int val;
//             cin >> val;
//             // pq.push(val);
//             // cout << pq.top() << endl;
//             s.insert(val);
//             cout << *s.begin() << endl;
//         }
//         else if (m == 1)
//         {
//             // cout << pq.top() << endl;
//             // pq.pop();
//             cout << *s.begin() << endl;
//             // s.erase(s.begin());
//         }
//         else if (m == 2)
//         {
//             s.erase(s.begin());
//             if (s.empty())
//             {
//                 cout << "Empty" << endl;
//             }
//             else
//             {
//                 cout << *s.begin() << endl;
//                 // cout << pq.top() << endl;
//                 // pq.pop();
//             }
//         }
//     }

//     // for (auto it = s.begin(); it != s.end(); it++)
//     // {
//     //     cout << *it << " ";
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

    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        if (m == 0)
        {
            int val;
            cin >> val;
            pq.push(val);
            cout << pq.top() << endl;
            // pq.pop();
        }
        else if (m == 1)
        {
            if (!pq.empty())
            {
                // pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (m == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    // while (!pq.empty())
    // {
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }

    return 0;
}
