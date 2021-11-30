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
    
    int row, col;
    int **numbers;
    
    cout << "Number of row(s) : ";
    cin >> row;
    cout << "Number of column(s) : ";
    cin >> col;
    
    
    numbers = (int**) malloc(row* sizeof(int*));
    
    for (int i = 0; i < row; i++) {
        *(numbers + i) = (int*) malloc(col*(sizeof(int)));
    }
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            *(*(numbers + i) + j) = rand() % 15 + 1;
        }
    }
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << *(*(numbers + i) + j) << "  ";
        }
        
        cout << endl;
    }
    
}
