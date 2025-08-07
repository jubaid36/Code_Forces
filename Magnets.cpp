#include <bits/stdc++.h> // Includes all standard libraries
using namespace std;

int main()
{
    int n;
    cin >> n; // Read the number of magnets

    string a, b; // 'a' stores the previous magnet, 'b' stores the current one
    int count = 0; // This will keep track of the number of groups

    cin >> a;      // Read the first magnet
    count = 1;     // The first magnet always starts the first group

    for(int i = 1; i < n; i++) // Loop through the remaining n-1 magnets
    {
        cin >> b; // Read the current magnet

        if (a != b) // If the current magnet is different from the previous one
        {
            count++; // Start a new group
            a = b;   // Update 'a' to be the current magnet for the next comparison
        }
    }

    cout << count << endl; // Output the total number of groups

    return 0; // Indicate successful program completion
}
