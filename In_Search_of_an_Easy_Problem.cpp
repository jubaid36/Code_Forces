#include<bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

int main()
{
    int n;
    cin >> n; // Input the number of people giving opinions

    int total = 0; // Variable to store the sum of all opinions

    for(int i = 0; i < n; i++)
    {
        int opinion = 0;
        cin >> opinion; // Take each person's opinion (0 = easy, 1 = hard)
        total = total + opinion; // Add the opinion to the total
    }

    // If no one said it's hard (sum is 0), then it's easy
    if (total == 0)
    {
        cout << "EASY" << endl;
    }
    else
    {
        cout << "HARD" << endl; // If at least one person said it's hard
    }

    return 0; // End of program
}
