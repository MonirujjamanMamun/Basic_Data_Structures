#include <bits/stdc++.h>

using namespace std;
bool isValid(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == 'A')
        {
            if (st.empty())
            {
                st.push(c);
            }
            else if (st.top() == 'B')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        else if (c == 'B')
        {
            if (st.empty())
            {
                st.push(c);
            }
            else if (st.top() == 'A')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
    }
    return st.empty();
    // }
}
int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        string a;
        cin >> a;
        bool ans = isValid(a);
        // stack<char> st;
        // for (char c : a)
        // {
        //     if (c == 'A')
        //     {
        //         if (st.empty())
        //         {
        //             st.push(c);
        //         }
        //         else if (st.top() == 'B')
        //         {
        //             st.pop();
        //         }
        //         else
        //         {
        //             st.push(c);
        //         }
        //     }
        //     else if (c == 'B')
        //     {
        //         if (st.empty())
        //         {
        //             st.push(c);
        //         }
        //         else if (st.top() == 'A')
        //         {
        //             st.pop();
        //         }
        //         else
        //         {
        //             st.push(c);
        //         }
        //     }
        // }

        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
