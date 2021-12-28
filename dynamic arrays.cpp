//creating array on runtime 

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "size = ";
    cin >> size;
    //int myArray[size];
    int* myArray = new int[size]; // new is a command to allocate memory for dynamic array
    
    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "]";
        cin >> myArray[i];
    }
    
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
        //cout<<*(myArray+i)<<" "; // derefrencing using pointer
    }

    delete[]myArray; // deallocate the memory once it is noneededany more
    myArray = NULL;

    system("pause>0");
 
}

