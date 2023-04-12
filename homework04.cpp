#include<iostream>
using namespace std;

int main()
{
    string student1{""}, student2{""};
    uint32_t id1{0}, id2{0};
    float grade1{0}, grade2{0};

    cin >> student1 >> student2;
    cin >> id1 >> id2;
    cin >> grade1 >> grade2;

    cout << "students grades in math" << endl;
    cout << student1 << "(id" << id1 << ") got grade : "  <<  grade1 << endl;
    cout << student2 << "(id" << id2 << ") got grade : "  <<  grade2 << endl;
    cout << "average score is : " << (grade1 + grade2) / 2.0 << endl;

    return 0;
}
