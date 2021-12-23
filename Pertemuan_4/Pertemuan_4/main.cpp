//
//  main.cpp
//  Pertemuan_4
//
//  Created by Bayu Rahman Adinata on 23/12/21.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int index = 1;
    
    for (int i = 1; i <= 10; i++) {
        cout<< setw(7) << i;
    }
    
    cout << endl;
    cout << endl;
    
    do {
        
        cout << index << setw(3);
        
        for (int i = 1; i <= 10; i++) {
            cout << setw(7) << i * index;
        }
        
        cout << endl;
        
        index++;
    } while (index <= 10);
    
    return 0;
}
