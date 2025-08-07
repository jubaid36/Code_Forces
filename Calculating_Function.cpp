#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

int main()
{
    long long n; // Declare a 64-bit integer to store large values of n (up to 10^15)
    cin >> n;     // Read the input value of n

    long long result; // This variable will store the final result of f(n)

    // Check whether n is even
    if(n % 2 == 0)
    {
        // If n is even, f(n) = n / 2 (based on the derived formula)
        result = n / 2;
    }
    else
    {
        // If n is odd, f(n) = - (n + 1) / 2
        result = -(n + 1) / 2;
    }

    cout << result << endl; // Output the final result

    return 0; // Indicate successful program termination
}
