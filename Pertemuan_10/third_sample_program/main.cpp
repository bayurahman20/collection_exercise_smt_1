#include<iostream>

using namespace std;

void printArr (int[5],int);

int main(void) {
    
    for (int i = 1; i <= 15; i++) {
        if (i % 3 == 0 && i % 4 == 0) {
            cout << "OKYES ";
        } else if (i % 3 == 0) {
            cout << "OKE ";
        } else if (i % 4 == 0) {
            cout << "YES ";
        } else {
            cout << i << " ";
        }
    }
}