#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

const int TRACK_LENGTH = 15;
const int MAX_HORSES = 5;

// Function prototypes
void Advance(int horseNumber, int positions[]);
void PrintLane(int horseNumber, int positions[]);
bool isWinner(int horseNumber, int positions[]);

int main() {
    srand(time(NULL));

    int positions[MAX_HORSES] = {0};
    bool winnerFound = false;
    int winningHorse = -1;

    while (!winnerFound) {

        cout << "Press ENTER to run the next turn...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        // waits for user to press Enter

        // Move each horse and print its lane
        for (int horse = 0; horse < MAX_HORSES; horse++) {
            Advance(horse, positions);
            PrintLane(horse, positions);

            if (isWinner(horse, positions)) {
                winnerFound = true;
                winningHorse = horse;
                break;
            }
        }

        cout << endl;
    }

    cout << "Horse " << (winningHorse) << " wins the race!" << endl;

    return 0;
}

void Advance(int horseNumber, int positions[]) {
    int coin = rand() % 2;
    positions[horseNumber] += coin;
}

void PrintLane(int horseNumber, int positions[]) {
    for (int i = 0; i < TRACK_LENGTH; i++) {
        if (i == positions[horseNumber]) {
            cout << (horseNumber);
        } else {
            cout << ".";
        }
    }
    cout << endl;
}

bool isWinner(int horseNumber, int positions[]) {
    return positions[horseNumber] >= TRACK_LENGTH;
}



