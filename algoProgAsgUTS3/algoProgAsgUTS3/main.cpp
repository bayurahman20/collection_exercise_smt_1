#include <iostream>
#include <iomanip>

using namespace std;

void countCharacter(string firstInput, string secondInput);
void concatCharacter(string firstInput, string secondInput);
void reverseCharacter(string firstInput, string secodnInput);

int main(void) {
    
    string firstInput, secondInput;
    
    cout << "first input : ";
    cin >> firstInput;
    
    cout << "second input : ";
    cin >> secondInput;
    
    countCharacter(firstInput, secondInput);
    concatCharacter(firstInput, secondInput);
    reverseCharacter(firstInput, secondInput);
}

void countCharacter(string firstInput, string secondInput) {
    cout << firstInput.length() << setw(5) << secondInput.length() << endl;
}

void concatCharacter(string firstInput, string secondInput) {
    cout << firstInput + secondInput << endl;
}

void reverseCharacter(string firstInput, string secondInput) {
    
    cout << secondInput[0];
    for (int i = 1; i < firstInput.length(); i++) {
        cout << firstInput[i];
    }
    
    cout << " ";
    
    cout << firstInput[0];
    for (int i = 1; i < firstInput.length(); i++) {
        cout << secondInput[i];
    }
    
    cout << endl;
    
}
