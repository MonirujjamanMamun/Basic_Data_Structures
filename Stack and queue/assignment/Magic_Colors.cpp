// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     stack<char> st;
//     while (n--)
//     {
//         int m;
//         string clr;
//         cin >> m;
//         cin >> clr;
//         for (char c : clr)
//         {
//             if ((c == 'B' && st.top() == 'R') || (c == 'R' && st.top() == 'B'))
//             {

//                 st.pop();
//                 st.push('P');
//             }
//             else if ((c == 'R' && st.top() == 'G') || (c == 'G' && st.top() == 'R'))
//             {
//                 st.pop();

//                 st.push('Y');
//             }
//             else if ((c == 'B' && st.top() == 'G') || (c == 'G' && st.top() == 'B'))
//             {
//                 st.pop();
//                 st.push('C');
//             };
//         }
//     }

//     stack<char> anotherSt;
//     while (!st.empty())
//     {
//         // anotherSt.push(st.top());
//         cout << st.top();
//         st.pop();
//     }
//     // while (!anotherSt.empty())
//     // {
//     //     cout << anotherSt.top();
//     //     anotherSt.pop();
//     // }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

string getFinalColors(string &s)
{
    stack<char> st;

    for (char c : s)
    {
        if (!st.empty() && st.top() == c)
        {
            st.pop();
        }
        else if (!st.empty())
        {

            if ((st.top() == 'R' && c == 'B') || (st.top() == 'B' && c == 'R'))
            {
                st.pop();
                st.push('P');
            }
            else if ((st.top() == 'R' && c == 'G') || (st.top() == 'G' && c == 'R'))
            {
                st.pop();
                st.push('Y');
            }
            else if ((st.top() == 'B' && c == 'G') || (st.top() == 'G' && c == 'B'))
            {
                st.pop();
                st.push('C');
            }
            else
            {
                st.push(c);
            }
        }
        else
        {
            st.push(c);
        }
    }

    // string finalColors;
    // while (!st.empty())
    // {
    //     finalColors = st.top() + finalColors;
    //     st.pop();
    // }

    // return finalColors;
    retu
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int m;
        cin >> m;

        string clr;
        cin >> clr;

        string finalColors = getFinalColors(clr);

        cout << finalColors << endl;
    }

    return 0;
}
