/* Nama Kelompok :
    1. Erwiyono Yusuf
    2. Evri Bagas Saputro
    3. Christian Folma Dio
    4. Bayu Rahman Adinata
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define row 9
#define col 9

int randNumber(int,int);
void checkInput();
void resultArr(int data[row][col],int,int);
bool checkDuplicateNumber(int data[row][col],int,int,int);


int main()
{
	srand(time(NULL));
	int result[row][col];
	string input = "a";

	cout<<"Welcome to Sudoku Game"<<endl;

	cout<<"Press s to view solution: ";
	checkInput();

	do {
    cout<<endl;

	resultArr(result, row, col);

	cout<<endl;

    cout<<"Press a to view another solution or x to exit: ";
    cin>>input;
	} while (input == "a");

	return 0;
}

int randNumber(int low,int high)
{
    return(rand()%(high+1-low)+low);
}

void checkInput()
{
    string inputCommand;
    cin >> inputCommand;
    for (int i = 0; true; i++) {
        if (inputCommand != "s") {
            cout << "Press s to view solution: ";
            cin >> inputCommand;
        } else {
            break;
        }
    }
}

void resultArr (int data[row][col],int x,int y)
{
    for(int i=0; i<9; i++){

        do{
        data[0][i]=randNumber(1,9);
        }while(checkDuplicateNumber(data, data[0][i],0,i));

        cout<<data[0][i]<<" ";
    }
    int index = 1;
    cout<<endl;
    for(int a=1 ; a<9; a++){
        for(int b=0; b<9; b++){
            if(index == 9){
                index = 0;
            }
            data[a][b] = data[0][index];
            cout<<data[a][b]<<" ";
            index++;
        }
        index++;
        cout<<endl;
    }
}

bool checkDuplicateNumber(int data[row][col],int check,int indexRow,int indexCol){
    for(int h=0; h<indexCol; h++){
        if(check == data[indexRow][h]){
            return true;
        }
    }return false;
}
