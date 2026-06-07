#include <iostream>  // <--- FIX: Use the C++ I/O stream header
using namespace std;

int main(){
    int num1 , num2 ;
    cout << "Enter number one: ";
    cin >> num1;
    cout<< "Enter number two: ";
    cin >> num2;
    cout << num1 + num2 << endl;

    return 0;
}