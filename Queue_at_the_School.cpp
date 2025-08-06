#include<bits/stdc++.h>  // Includes all standard libraries (like iostream, string, etc.)
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;   // Input: n = number of children, t = number of seconds
    string s;
    cin >> s;        // Input: the queue as a string of 'B' (boys) and 'G' (girls)

    // Simulate the process for t seconds
    while (t--)
    {
        // Traverse the string from left to right
        for (int i = 0; i < n - 1; i++)
        {
            // If a boy is in front of a girl, swap them
            if (s[i] == 'B' && s[i+1] == 'G')
            {
                swap(s[i], s[i+1]);  // Swap positions: boy lets the girl move forward
                i++;  // Skip the next position since it was just involved in a swap
            }
        }
    }

    cout << s << endl;  // Output the final queue after t seconds
    return 0;           // End of program
}
