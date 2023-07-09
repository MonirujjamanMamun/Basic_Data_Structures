#include <bits/stdc++.h>

using namespace std;

int main()
{

    list<string> myList;
    string a;
    while (true)
    {
        cin >> a;
        if (a == "end")
            break;
        myList.push_back(a);
    }
    int n;
    cin >> n;
    while (n--)
    {
        string addres;
        cin >> addres;
        string *ans = find(myList.begin(), myList.end(), addres);
    }

    // for (string v : myList)
    // {
    //     cout << v << " ";
    // }
    return 0;
}

// #include <iostream>
// #include <list>
// #include <string>

// // Function to perform the commands on the doubly linked list
// void processCommands(std::list<std::string> &addresses, int Q)
// {
//     std::string currentAddress;
//     auto currentPos = addresses.begin();

//     for (int i = 0; i < Q; i++)
//     {
//         std::string command;
//         std::cin >> command;

//         if (command == "visit")
//         {
//             std::string address;
//             std::cin >> address;

//             auto it = std::find(addresses.begin(), addresses.end(), address);
//             if (it != addresses.end())
//             {
//                 currentAddress = address;
//                 currentPos = it;
//                 std::cout << currentAddress << std::endl;
//             }
//             else
//             {
//                 std::cout << "Not Available" << std::endl;
//             }
//         }
//         else if (command == "next")
//         {
//             if (currentPos != addresses.end() && std::next(currentPos) != addresses.end())
//             {
//                 ++currentPos;
//                 currentAddress = *currentPos;
//                 std::cout << currentAddress << std::endl;
//             }
//             else
//             {
//                 std::cout << "Not Available" << std::endl;
//             }
//         }
//         else if (command == "prev")
//         {
//             if (currentPos != addresses.begin())
//             {
//                 --currentPos;
//                 currentAddress = *currentPos;
//                 std::cout << currentAddress << std::endl;
//             }
//             else
//             {
//                 std::cout << "Not Available" << std::endl;
//             }
//         }
//     }
// }

// int main()
// {
//     std::list<std::string> addresses;
//     std::string address;

//     // Read the doubly linked list of addresses
//     while (std::cin >> address)
//     {
//         if (address == "end")
//         {
//             break;
//         }
//         addresses.push_back(address);
//     }

//     int Q;
//     std::cin >> Q;

//     // Process the commands on the doubly linked list
//     processCommands(addresses, Q);

//     return 0;
// }
