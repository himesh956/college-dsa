#include <bits/stdc++.h>
using namespace std;

// for table print
int main() {
	
	int num,t=1;
	
	cin >> num;
	cout << endl << "the number for table's : "<< num << endl;
	cout << "the table is : ";
	
	while (t<=10) {
	    cout << " " << t*num;
	    t++;
	}
	return 0;

}
