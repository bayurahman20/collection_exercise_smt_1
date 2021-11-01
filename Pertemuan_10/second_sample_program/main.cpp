#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    char hello[30] = "Hello Mr. ", name[30], messages[80];
    cout << "Your last name : ";
    cin >> setw(30) >> name;

    strcat(hello, name);
    cout << hello << endl;

    cin.sync();
    cout << "\nWhat is the message for today ? " << endl;
    cin.getline(messages, 80);

    if (strlen(messages) > 0) {
        for (int i = 0; messages[i] != '\0'; i++) {
            cout << messages[i] << ' ';
        }
        cout << endl;
    }
};