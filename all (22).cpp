#include <bits/stdc++.h>
using namespace std;

int main() {
	// print fibbonaci series
	int noel,n1=1 , n2=1;
	int next;
	cout << n1<< " " << n2;
	for ( noel=1; noel<=6; noel++) {
	    next=n1+n2;
	    n1=n2;
	    n2=next;
	    cout << " "<< next;
	}
   return 0;
}
