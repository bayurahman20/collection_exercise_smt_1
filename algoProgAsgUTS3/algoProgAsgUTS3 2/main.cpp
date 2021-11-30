#include <iostream>
#include <string>
#include <ctime>
#include <cmath>

/* Nama Kelompok :
    1. Erwiyono Yusuf
    2. Evri Bagas Saputro
    3. Christian Folma Dio
    4. Bayu Rahman Adinata
*/


using namespace std;

bool getValuePlayDices(bool *isTurn, int *p1Total, int *p2Total);
void checkInput();
bool checkPlayerWin(bool *isTurn, int *p1Total, int *p2Total, int random1, int random2);

int main() {
    bool isTurn = true;
    int  p1Total  = 0;
    int  p2Total  = 0;
    bool isWin = false;
    
    cout << "Welcome to Dice Game" << endl;
    cout << "Press s to start the game: ";
    
    checkInput();

    srand(time(NULL));
    for (int i = 0; true; i++) {
        isWin = getValuePlayDices(&isTurn, &p1Total, &p2Total);
        if (isWin) {
            break;
        }
    }
}

void checkInput() {
    string inputCommand;
    cin >> inputCommand;
    for (int i = 0; true; i++) {
        if (inputCommand != "s") {
            cout << "Press s to start the game: ";
            cin >> inputCommand;
        } else {
            break;
        }
    }
}

bool checkPlayerWin(bool **isTurn, int **p1Total, int **p2Total, int random1, int random2) {
    bool isWin = NULL;
    if (**isTurn) {
        **p1Total += random1 + random2;

        if ( **p1Total >= 20 ) {
            isWin = true;
        }
    } else {
        **p2Total += random1 + random2;
        if ( **p2Total >= 20 ) {
            isWin = true;
        }
    }
    
    return isWin;
}

bool getValuePlayDices(bool *isTurn, int *p1Total, int *p2Total) {
    
    string player = (*isTurn ? "P1" : "P2"), input;
    bool isWin;
    
    cout <<"P1: "<< *p1Total <<endl;
    cout <<"P2: "<< *p2Total <<endl;
    cout << player << " turn" << endl;
    cout << "Press r to roll dices: ";
    cin >> input;
    
    for (int i = 0; true; i++) {
        if (input != "r") {
            cout << "Press r to roll dices: ";
            cin >> input;
        } else {
            break;
        }
    }

    int min   = 1;
    int max   = 6;
    int random1 = rand() % (max - min + min) + min;
    int random2 = rand() % (max - min + min) + min;

    cout << player << " gets " << random1 << " and " << random2 << endl;

    isWin = checkPlayerWin(&isTurn, &p1Total, &p2Total, random1, random2);
    
    if (isWin) {
        cout <<"P1: "<< *p1Total <<endl;
        cout <<"P2: "<< *p2Total <<endl;

        cout << player << " wins " << endl;
    } else if (random1 == random2) {
        cout << player<< " gets same values, " << player << " move again" << endl;
    } else {
        *isTurn = !*isTurn;
    }

    cout<<endl;

    return isWin;
}
