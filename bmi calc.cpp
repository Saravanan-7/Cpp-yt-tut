
#include <iostream>
using namespace std;

int main()
{
    float weight, height, bmi;
    cout << "weight & height : " << endl;
    cin >> weight >> height;
    bmi = weight / (height * height);

    if (bmi < 18.5)
        cout << "under weight - ";
    else if (bmi > 25)
        cout << "over weight - ";
    else
        cout << "normal weight - ";
    cout << " your bmi is " << bmi << endl;

    system("pause > 0");

}

