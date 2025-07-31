#include <bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

int main()
{
    string s;  // Declare a string to store the Berland word
    cin >> s;  // Input the Berland word

    string t;  // Declare a string to store the translated Birland word
    cin >> t;  // Input the translated Birland word

    // Reverse the Berland word to compare with the Birland translation
    reverse(s.begin(), s.end());

    // Check if the reversed Berland word matches the Birland word
    if(s == t)
    {
        cout << "YES" << endl;  // If match, translation is correct
    }
    else
    {
        cout << "NO" << endl;   // If not match, translation is incorrect
    }

    return 0;  // Indicate that the program ended successfully
}
