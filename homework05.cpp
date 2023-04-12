#include<iostream>
using namespace std; 

int main()
{
    int even0{0}, even1{0}, even2{0}, even3{0};
    int odd0{0}, odd1{0}, odd2{0}, odd3{0}; 

    cin >> odd0 >> even0;
    cin >> odd1 >> even1;
    cin >> odd2 >> even2;
    cin >> odd3 >> even3;

    int evenSum = even0 + even1 + even2 + even3;
    int oddSum = odd0 + odd1 + odd2 + odd3;

    cout << oddSum << " " << evenSum << endl;

    return 0;
}