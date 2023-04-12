#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b < 0)
    {
        a = (2 * a) + 1;
        cout << a << endl;
    }
    else
    {
        a = a*a;
        cout << a << endl;
    }
    return 0;
}