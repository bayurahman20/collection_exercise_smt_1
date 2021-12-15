#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int randNumber(int low, int height);
int checkIsPrime(int number);

int main(int argc, const char * argv[]) {
    
    srand(time(NULL));
    
    int row, col;
    int limit = 5;
    
    cout << "Row : ";
    cin >> row;
    
    cout << "Col : ";
    cin >> col;
    
    
    if (row && col <= limit) {
        int numbers[row][col];
        
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                int number = randNumber(1, 10);
                numbers[i][j] = number;
            }
        }
        
        cout << "Your Data (Random number 1 - 10, duplicate is allowed): "<< endl;
        
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << setw(3) << numbers[i][j];
            }
            cout << endl;
        }
        
        cout << "Your data without prime number : " << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                int check = checkIsPrime(numbers[i][j]);
                if (check != 0) {
                    cout << setw(3) << numbers[i][j];
                }
            }
            cout << endl;
        }
    } else {
        cout << "Please input 5 only" << endl;
    }
        
    
    return 0;
}

int randNumber(int low,int high) {
    if (low == high) {
        return low;
    }
    else {
        return (rand()%(high - low + 1)+ low);
    }
}

int checkIsPrime(int number) {
    int counter = 0;
    
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            counter++;
        }
    }
    
    if (counter == 2) {
        return number = 0;
    } else {
        return number;
    }
}
