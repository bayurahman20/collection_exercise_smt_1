#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

int randomNumber(int low, int high);
void getModusValue(int *numbers);
void viewInitializeResult(int *numbers, int inputN);

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    
    int inputN, index = 0;
    
    cout << "N : ";
    cin >> inputN;
    
    cout << endl;
    
    int *numbers = (int*) malloc(inputN * sizeof(int));
     
    cout << "Your Data (Random number 1 - 100, duplicate is allowed) : " << endl;
    do {
        numbers[index] = randomNumber(1, 100);
        
        index++;
    } while (index < inputN);
    
    viewInitializeResult(numbers, inputN);
    
    cout << endl;
    cout << endl;
    
    
    return 0;
}

int randomNumber(int low, int high) {
    
    int number = (rand() % high + low);
    
    return number;
}

void getModusValue(int *number) {
   
    for (int i = 0; i < 5; i++) {
        cout << (*number + i) << endl;
    }
   
}

void viewInitializeResult(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        cout << numbers[i] << setw(3);
    }
    
}
