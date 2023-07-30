#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_inx = v.size() - 1;
        while (cur_inx != 0)
        {
            int par_inx = (cur_inx - 1) / 2;
            if (v[par_inx] > v[cur_inx])
            {
                swap(v[par_inx], v[cur_inx]);
            }
            else
            {
                break;
            }
            cur_inx = par_inx;
        }
    }
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}