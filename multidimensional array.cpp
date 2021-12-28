// this doesn't have any output., please refer codebeauty - mutidimensional array - 09:48:35 – Multidimensional dynamic arrays, Two-dimensional array

#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << " rows, cols: ";
    cin >> rows >> cols;

    int** table = new int* [rows];              //** - pointer to a pointer
    for (int i = 0; i < rows; i++) {
        table[i] = new int[cols];
    }

    table[1][2] = 88;

    for (int i = 0; i < rows; i++) {
        delete[] table[i];
    }

    delete[] table;
    table = NULL;


    system("pause>0");
    return 0;
}

