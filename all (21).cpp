#include <bits/stdc++.h>
using namespace std;

int main() {
		// print factorial
		
		int fact=1,num;
		cin >>num;
		while (num>=1) {
		    
		    fact*=num;
		    num--;
		}
	 cout << " the factorial : " << fact;
  return 0;

}
