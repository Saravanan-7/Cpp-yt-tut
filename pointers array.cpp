// pointersand arrays are likely same when handling memory location
// breakpoint is used here

#include <iostream>
using namespace std;

int main()
{
    int luckyNumbers[5];
    /*
    cout << luckyNumbers << endl; // op - address of 1st element in array
    cout << &luckyNumbers[0] << endl; // do
    cout << luckyNumbers[2] << endl;// prints value in the second (0,1,2) position 
    cout << *(luckyNumbers+2) << endl;// do
    */

    for (int i = 0; i <= 4; i++) { // value input
        cout << " Number: ";
        cin >> luckyNumbers[i];
        }

    for (int i = 0; i <= 4; i++) { // vlue output
        cout<< *(luckyNumbers+i)<<" ";
    }

    system("pause>0");
    return 0;
}

