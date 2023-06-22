#include <iostream>
using namespace std;
int main()
{
    // We put "1" to indicate there is a ship.
    bool ships[4][4] = {
      { 0, 1, 1, 0 },
      { 0, 0, 0, 0 },
      { 0, 0, 1, 0 },
      { 0, 0, 1, 0 }
    };

    // Keep track of how many hits the player has and how many turns they have played in these variables
    int hits = 0;
    int numberOfTurns = 0;

    // Allow the player to keep going until they have hit all four ships
    while (hits < 4) {
        int row, column;

        cout << "Selecting coordinates\n";

        // Ask the player for a row
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        // Ask the player for a column
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        // Check if a ship exists in those coordinates
        if (ships[row][column]) {
            // If the player hit a ship, remove it by setting the value to zero.
            ships[row][column] = 0;

            // Increase the hit counter
            hits++;

            // Tell the player that they have hit a ship and how many ships are left
            cout << "Hit! " << (4 - hits) << " left.\n\n";
        }
        else {
            // Tell the player that they missed
            cout << "Miss\n\n";
        }

        // Count how many turns the player has taken
        numberOfTurns++;
    }

    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
