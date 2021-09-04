#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, temp;

    cout << "\nBefore swapping " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}