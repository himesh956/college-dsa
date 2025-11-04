#include <bits/stdc++.h>
using namespace std;

int main() {
	int w,x,y,z,t;
	cin>>x>>y;
	w=x&y;
	cout <<endl <<"the value of bitwise and is : " << w;
	z=x|y;
	cout << endl<<"the value of bitwise or is : "<<z;
	t=!w;
	cout <<endl <<"the value of not operator is : "<<t;
	return 0;
}
