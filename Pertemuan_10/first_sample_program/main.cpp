#include <iostream>

using namespace std;

int main(void) {
    int data[5];

    for (int i = 0; i < 5; i++)
    {
        data[i] = i + 1;
    }

    cout << "Output : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << data[i] << " ";
    }
    
    
}