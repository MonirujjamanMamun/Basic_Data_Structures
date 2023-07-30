#include <bits/stdc++.h>

using namespace std;

int main()
{

    map<string, int> mp;
    // mp.insert({"sakib", 79});
    // mp.insert({"tamim", 98});
    // mp.insert({"reyad", 77});
    mp["sakib"] = 79;
    mp["tamim"] = 98;
    mp["reyad"] = 77;
    mp["musfiq"] = 59;
    mp["mass"] = 100;

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    // cout << mp["musfiq"];
    // cout << mp["mass"];
    if (mp.count("mass"))
    {
        cout << "Ace" << endl;
    }
    else
    {
        cout << "Nai" << endl;
    }
    return 0;
}