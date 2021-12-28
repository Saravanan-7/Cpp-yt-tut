#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char op;
    cout << " MY CALC " << endl;
    cin >> num1 >> op >> num2;
    switch (op)
    {
    case '-': cout << num1 << op << num2 << "=" << num1 - num2; break;
    case '+': cout << num1 << op << num2 << "=" << num1 + num2; break;
    case '*': cout << num1 << op << num2 << "=" << num1 * num2; break;
    case '/': cout << num1 << op << num2 << "=" << num1 / num2; break;
    case '%':
    {
        bool isNum1Int, isNum2Int;
        isNum1Int = ((int)num1 == num1);
        isNum2Int = ((int)num2 == num2);

        if (isNum1Int && isNum2Int)
            cout << num1 << op << num2 << "=" << (int)num1 % (int)num2;
        else
            cout << "not valid";
        break;
    }
    system("pause>0");
    }
}

