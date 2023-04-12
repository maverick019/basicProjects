#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    // if n = 5, 1 + 2 + 3 + 4 + 5 = 15
    cout << (n * (n+1) / 2) << endl; 
    return 0;
}