#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i <= t; i++)
    {
        map<string, int> mp;
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        string maxWord;
        int maxCount = 0;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > maxCount)
            {
                maxCount = mp[word];
                maxWord = word;
            }
        }
        if (maxCount != 0)
        {
            cout << maxWord << " " << maxCount << endl;
        }
    }
    return 0;
}

// #include <iostream>
// #include <string>
// #include <sstream>
// #include <map>

// using namespace std;

// map<string, int> wordCount;
// string mostFrequentWord(const string &S)
// {
//     istringstream iss(S);
//     string word, maxWord;
//     int maxCount = 0;

//     while (iss >> word)
//     {
//         wordCount[word]++;
//         if (wordCount[word] > maxCount)
//         {
//             maxCount = wordCount[word];
//             maxWord = word;
//         }
//     }

//     return maxWord;
// }

// int main()
// {
//     string S;
//     // cout << "Enter the string: ";
//     getline(cin, S);

//     string mostFrequent = mostFrequentWord(S);

//     if (!mostFrequent.empty())
//     {
//         cout << mostFrequent << " " << wordCount[mostFrequent] << endl;
//     }
//     else
//     {
//         cout << "No word found in the input." << endl;
//     }

//     return 0;
// }
