#include <iostream>
using namespace std;

int sumOfPlantTrees(int year)
{
    if (year == 0)
    {
        return 0;
    }

    // Recursive formula: sumOfPlantTrees(year) = 2 * sumOfPlantTrees(year - 1) + 1
    return 2 * sumOfPlantTrees(year - 1) + 1;
}

int main()
{
    int Y;
    // cout << "Enter the year (Y): ";
    cin >> Y;

    int sum = sumOfPlantTrees(Y);
    cout << sum << endl;

    return 0;
}
