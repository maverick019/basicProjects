#include <iostream>
using namespace std;

void performMath(const int& a, const int& b)
{
    int result{0}; // use float instead of int 
    result = a + b;
    cout << "addition result : " << result << endl;
    result = a - b;
    cout << "subtraction results are : " << result << endl;
    result = a * b;
    cout << "multiplication result : " << result << endl;
    result = a / b;
    cout << "Division result : " << result << endl;
}

int main ()
{
    int a{0}, b{0};
    cin >> a >> b;
    performMath(a, b);
}