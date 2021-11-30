// 
//  Evri Bagas Saputro
//  Erwiyono Yusuf
//  Christian Folma Dio
//  Bayu Rahman Adinata
// 

#include <iostream>
#include <time.h>

using namespace std;

void getMarblesResult(int humanMarbles[20], int computerMarbles[20]);

int main(void) {
    int humanMarbles[20];
    int computerMarbles[20];
    srand(time(NULL));

    cout << "Welcome to Marbles Game" << endl;
    cout << "=======================" << endl;
    getMarblesResult(humanMarbles, computerMarbles);
}

void getMarblesResult(int humanMarbles[20], int computerMarbles[20]) {
    int maxMarbleHuman = 0;
    int maxMarbleComputer = 0;
    string guessCommand = "";

    for (int i = 0; i < 10; i++) {
        humanMarbles[i] = i + 1;
        computerMarbles[i] = i + 1;

        if (humanMarbles[i] && computerMarbles[i] == 10) {
            maxMarbleHuman += humanMarbles[i];
            maxMarbleComputer += computerMarbles[i];
        }
    }

    cout << "Human Marbles: " << maxMarbleHuman << endl;
    for (int i = 0; i < maxMarbleHuman; i++) {
        cout << 0 << " ";
    }

    cout << endl;

    cout << "Computer Marbles: " << maxMarbleComputer << endl;
    for (int i = 0; i < maxMarbleComputer; i++) {
        cout << 0 << " ";
    }

    cout << endl;
    cout << endl;

    int humanPick = rand() % maxMarbleHuman + 1;
    int computerPick = rand() % maxMarbleComputer + 1;

    cout << "Computer guess: ";
    cin >> guessCommand;
    cout << "Human pick: " << humanPick << endl;
    cout << "Computer pick: " << computerPick << endl;

    cout << endl;
    cout << endl;

    if ((guessCommand == "even" && humanPick % 2 == 0) || (guessCommand == "odd" && humanPick % 2 != 0)) {
        for (int i = 11; i <= 20 - maxMarbleComputer + humanPick; i++) {
            computerMarbles[i] = i;
            maxMarbleComputer += humanPick;
            maxMarbleHuman -= humanPick;
        }
    } else {
        for (int i = 11; i <= 20 - maxMarbleHuman + computerPick; i++) {
            humanMarbles[i] = i;
            maxMarbleHuman += computerPick;
            maxMarbleComputer -= computerPick;
        }
    }
    
    cout << "Human Marbles: " << maxMarbleHuman << endl;
    for (int i = 0; i < maxMarbleHuman; i++) {
        cout << 0 << " "; 
    }
    cout << endl;
    cout << "Computer Marbles: " << maxMarbleComputer << endl;
    for (int i = 0; i < maxMarbleComputer; i++) {
        cout << 0 << " ";
    }

    cout << endl;
    cout << endl;

    if (maxMarbleComputer != 0) {
        cout << "Human's guess (type even or odd): ";
        cin >> guessCommand;
        humanPick = rand() % maxMarbleHuman + 1;
        computerPick = rand() % maxMarbleComputer + 1;
        cout << "Human pick: " << humanPick << endl;
        cout << "Computer pick: " << computerPick << endl;

            if ((guessCommand == "even" && computerPick % 2 == 0) || (guessCommand == "odd" && computerPick % 2 != 0)) {
            for (int i = maxMarbleHuman; i <= 20 - maxMarbleHuman + computerPick; i++) {
                humanMarbles[i] = i;
                maxMarbleHuman += computerPick;
                maxMarbleComputer -= computerPick;
            }
        } else {
            for (int i = maxMarbleComputer; i <= 20 - maxMarbleComputer + humanPick; i++) {
                computerMarbles[i] = i;
                maxMarbleComputer += humanPick;
                maxMarbleHuman -= humanPick;
            }
        }
    }

    cout << endl;
    cout << endl;

    cout << "Human Marbles: " << maxMarbleHuman << endl;
    for (int i = 0; i < maxMarbleHuman; i++) {
        cout << 0 << " "; 
    }
    cout << endl;
    cout << "Computer Marbles: " << maxMarbleComputer << endl;
    for (int i = 0; i < maxMarbleComputer; i++) {
        cout << 0 << " ";
    }

    cout << endl;
    cout << endl;

    if (maxMarbleHuman == 0) {
        cout << "Computer Wins!";
    } else if (maxMarbleComputer == 0) {
        cout << "Human Wins!";
    }
}
