#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;  // Read the number of friends (n) and the fence height (h)
    
    int totalWidth = 0;  // Initialize total required road width to zero

    // Loop through each friend to read their height and calculate needed width
    for (int i = 0; i < n; i++)
    {
        int a;          // Variable to store the current friend's height
        cin >> a;       // Input the height of the i-th friend

        // If the friend's height is greater than the fence height,
        // they need to bend down, which takes width = 2
        if (a > h)
        {
            totalWidth += 2;
        }
        else
        {
            // Otherwise, the friend walks normally, taking width = 1
            totalWidth += 1;
        }
    }

    cout << totalWidth;  // Output the minimum total width of the road needed
    return 0;            // End of program
}
