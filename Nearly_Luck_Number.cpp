#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

int main()
{
    string n;
    cin >> n; // Input a number as a string to process each digit easily

    int luckycount = 0; // Variable to count digits that are '4' or '7'

    // Loop through each digit of the input number
    for (char digit : n)
    {
        // Check if the digit is '4' or '7'
        if (digit == '4' || digit == '7')
        {
            luckycount++; // Increment luckycount if the digit is lucky
        }
    }

    // Convert the lucky digit count to a string for further checking
    string countstr = to_string(luckycount);

    bool islucky = true; // Assume the number is lucky until proven otherwise

    // Check if all digits in the countstr are either '4' or '7'
    for (char c : countstr)
    {
        if (c != '4' && c != '7')
        {
            islucky = false; // If any digit is not '4' or '7', it's not lucky
            break; // No need to check further
        }
    }

    // Output the result based on whether the count is a lucky number
    if (islucky)
    {
        cout << "YES" << endl; // Lucky number
    }
    else
    {
        cout << "NO" << endl; // Not a lucky number
    }

    return 0; // End of the program
}
