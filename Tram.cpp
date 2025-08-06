#include<bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

int main()
{
    int n, a, b;             // n = number of stops, a = people exiting, b = people entering
    cin >> n;                // Read the number of stops

    int total = 0;           // Current number of passengers inside the tram
    int maxpeaple = 0;       // Maximum number of passengers at any point (tram capacity needed)

    // Loop through all stops
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;       // Read number of passengers exiting (a) and entering (b) at current stop

        total = total - a;   // First, passengers exit the tram
        total = total + b;   // Then, passengers enter the tram

        // Update maxpeaple if current total passengers is greater than previous maximum
        if (total > maxpeaple)
        {
            maxpeaple = total;
        }
    }

    cout << maxpeaple << endl;  // Output the minimum capacity needed for the tram

    return 0;
}
