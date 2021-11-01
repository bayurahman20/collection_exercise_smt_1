#include<iostream>

using namespace std;

void printArr (int[5],int);

int main(void) {
    int data[5];

    for(int i=0;i<5;i++) {
        data[i]=i+1;
    }

    printArr(data,5);

}

void printArr(int data[5], int n){
    for(int i=0;i<5;i++){
    cout<<data[i]<<" ";
    }
}