#include <iostream>
using namespace std;

int main()
{
    int n, i, x;
    int a[10];

    cout << "Enter the total number of records : ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout <<"Enter Mark "<< i + 1 << " : ";
        cin >> a[i];
    }

    cout<<"\nOutput:\n";

    for (i = 0; i < n; i++)
    {
        x = (a[i] + 4) / 5;
        x *= 5;
        if (x >= 40 && x - a[i] < 3)
            a[i] = x;
        cout <<"Mark "<< i + 1 << " : " << a[i] << endl;
    }
    return 0;
}