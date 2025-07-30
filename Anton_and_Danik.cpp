#include <bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

int main()
{
    int n;
    cin >> n;  // Input the total number of games played

    string result;
    cin >> result;  // Input the result string (consists of 'A' for Anton, 'D' for Danik)

    int countAnton = 0;  // Counter for Anton's wins
    int countDanik = 0;  // Counter for Danik's wins

    // Loop through each character in the result string
    for (char c : result)
    {
        if (c == 'A')
        {
            countAnton++;  // If 'A', increment Anton's win count
        }
        else if (c == 'D')
        {
            countDanik++;  // If 'D', increment Danik's win count
        }
    }

    // Compare the win counts to determine the overall winner
    if (countAnton > countDanik)
    {
        cout << "Anton" << endl;  // Anton won more games
    }
    else if (countAnton < countDanik)
    {
        cout << "Danik" << endl;  // Danik won more games
    }
    else
    {
        cout << "Friendship" << endl;  // Both won an equal number of games
    }

    return 0;  // End of program
}
