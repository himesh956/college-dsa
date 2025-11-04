#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int year;
	cin >>year;
	if (year %4==0 && year %100!=0)
	cout << "this is a leap year " << endl;
	else 
	cout <<"not a leap year ";
	return 0;

}
