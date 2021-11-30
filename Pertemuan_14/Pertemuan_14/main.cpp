//
//  main.cpp
//  Pertemuan_14
//
//  Created by Bayu Rahman Adinata on 30/11/21.
//

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main(void) {
    
    srand(time(NULL));
    
    int amountInput, counter = 0;
    cout << "Amount of data: ";
    cin >> amountInput;
    cout << endl;
    
    cout << "Your data (random 1-10):\n";
    do {
        int *number = (int *) malloc(amountInput * sizeof(int));
        *number = rand() % 10 + 1;
        cout << *number << setw(3);
        counter++;
    } while (counter < 5);
    cout << "\n\n";
}
