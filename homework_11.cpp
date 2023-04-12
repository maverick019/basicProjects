#include<iostream>
using namespace std;

int main() {
	int a = 0, b = 1;

	cout<<a++<<"\n"; //a = 1 but after assigment
	cout<<++a<<"\n"; // a = 2 
	a += 2*b+1; // a = 2 + 2*1+1 = 5 
	b = ++a * 2; // b = 6 * 2 = 12
	cout<<a<<" "<<b<<"\n";

	b = a;
	a = 12 + a / 3 / 2 - 2 * 2; // 12 + 5 / 3 / 2 - 2 * 2
	cout<<a<<"\n"; // 9

	a = b;
	a = ((12 + a) / 3 / 2 - 2) * 2;
	cout<<a<<"\n"; // 2

	return 0;
}

