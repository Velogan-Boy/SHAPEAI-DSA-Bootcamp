#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i, count = 1;
    string s;
    cout << "Enter the String :";
    cin >> s;
    
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}