//check No. btw 100 - 500 divisible by 3 & 5
#include <iostream>
using namespace std;


int main()
{
    int counter = 100;
    while (counter <= 500)
    {
        if (counter % 3 == 0 && counter % 5 == 0)

            cout << counter << " is divisible \n" << endl;
        counter++;
    }
        system("pause>0");
    
}

