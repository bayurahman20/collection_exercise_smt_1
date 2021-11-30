/*
    Nama Kelompok :
 1. Evri Bagas Saputro
 2. Erwiyono Yusuf
 3. Christian Folma Dio
 4. Bayu Rahman Adinata
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void randomNumber(int *arr, size_t n);
bool checkIsPrime(int number);

int main() {
    int input;
    cout << "Masukkan jumlah data (minimal 1): ";
    cin >> input;
    int numbers[input];
        for (int i=1; i<input; i++){
            numbers[i] = i;
        }
    randomNumber(numbers, input);
    for (int i=1; i<input; i++){
        cout << numbers[i] << "  ";
    }
    cout << endl;
    cout << endl;
    cout << "Prime number: " << endl;
    for (int i = 1; i < input; i++) {
        bool flag = checkIsPrime(numbers[i]);
        
        if (flag) {
            cout << numbers[i] << "  ";
        }
    }
    
    cout << endl;
    cout << endl;
    cout << "Non prime number: " << endl;
    for (int i = 1; i < input; i++) {
        bool flag = checkIsPrime(numbers[i]);
        
        if (!flag) {
            cout << numbers[i] << "  ";
        }
    }
    cout << endl;
}

bool checkIsPrime(int number) {
    
    int counter = 0;
    bool isPrime;
    
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            counter++;
        }
    }
    
    if (counter == 2) {
        isPrime = true;
    } else {
        isPrime = false;
    }
    
    return isPrime;
}

void randomNumber(int *arr, size_t n) {
    if (n > 1) {
    size_t i;
    srand(time(NULL));
            for (i = 1; i < n - 1; i++) {
                size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
            int t = arr[j];
            arr[j] = arr[i];
            arr[i] = t;
        }
    }
}
