#include <bits/stdc++.h> 
using namespace std;

// Function to check if all digits in the year are distinct
bool distinct_digits(int year)
{
    // Array to keep track of digits seen so far; initialized to false
    bool visited[10] = {false};

    // Extract digits one by one from the year
    while (year > 0)
    {
        int digit = year % 10;  // Get the last digit of the year

        // If this digit was already seen before, digits are not distinct
        if (visited[digit] == true)
        {
            return false;  // Duplicate digit found
        }

        visited[digit] = true;  // Mark this digit as seen

        year = year / 10;  // Remove the last digit from the year
    }

    // All digits are distinct if we reach here
    return true;
}

int main()
{
    int year;
    cin >> year;  // Input the starting year

    int nextyear = year + 1;  // Start checking from the next year

    // Loop until we find a year with distinct digits
    while (true)
    {
        // Check if the current year has distinct digits
        if (distinct_digits(nextyear))
        {
            cout << nextyear << endl;  // Output the valid year
            break;  // Exit the loop once found
        }

        nextyear++;  // Check the next year
    }

    return 0;
}
