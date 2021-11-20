#include<iostream>
#include <time.h>
#include <iomanip>

using namespace std;

#define rows 3
#define cols 7

void swap(int* a, int* b);
int partition (int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void viewArray(int arr[rows][cols], int row, int col);
int randNumber(int low,int high);
void printArray(int numbers[], int size);

int results[rows][cols];
int main(void) {
    srand(time(NULL));
    
    cout << "Quick Sort With 2D Array \n\n";
    
    int arr[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = randNumber(1, 10);
        }
    }
    cout << "Starting Array : \n\n";
    viewArray(arr, rows, cols);
    
    cout << "This is step by step Quick Sort : \n\n";
    int counter = 0;
    int numbers[cols];
    do {
        for (int i = 0; i < cols; i++) {
            numbers[i] = arr[counter][i];
        }
        
        int size = sizeof(numbers) / sizeof(numbers[0]);
        quickSort(numbers, 0, size - 1);
        printArray(numbers, cols);
        counter++;
        cout << endl;
    } while (counter < rows);
    cout << endl;
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high) {
    int pivot = arr[high];
    cout << "Pivot : " << pivot << " IS LAST ELEMENT ARRAY" << endl;
    
    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;    // increment index of smaller element
            cout << " IF " << setw(2) << arr[j] << " (CURRENT ELEMENT) " << "<= " << setw(2) << pivot << " (PIVOT) is true = ";
            cout << setw(2) << arr[i] << " Swap With " << setw(2) << arr[j] << endl;
            swap(&arr[i], &arr[j]);
        } else {
            cout << " IF " << setw(2) << arr[j] << " (CURRENT ELEMENT) " << "<= " << setw(2) << pivot << " (PIVOT) is false (NO SWAP NUMBER)\n";
        }
    }
    
    cout << " CURRENT ELEMENT SWAP WITH PIVOT = ";
    cout << setw(2) << arr[i + 1] << " Swap With " << setw(2) << arr[high] << endl << endl;
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void viewArray(int arr[rows][cols], int col, int row) {
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int randNumber(int low,int high) {
    if (low == high) {
        return low;
    } else {
        return (rand()%(high - low + 1)+ low);
    }
}

void printArray(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(3) << numbers[i];
    }
}
