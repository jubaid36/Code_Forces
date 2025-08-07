#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std;

int main()
{
    int n;
    cin >> n; // Read the number of friends

    int a[n + 1];       // Array to store gift receivers: a[i] = person who received gift from friend i
    int result[n + 1];  // Array to store final result: result[i] = person who gave gift to friend i

    // Read the gift receivers for each friend (1-based index)
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    // Build the inverse mapping: for each receiver a[i], set result[a[i]] = i (giver)
    for (int i = 1; i <= n; i++)
    {
        result[a[i]] = i;
    }

    // Print the result: for each friend i, output who gave them a gift
    for (int i = 1; i <= n; i++)
    {
        cout << result[i] << " ";
    }

    cout << endl; // End the output line

    return 0; // Indicate successful program termination
}
