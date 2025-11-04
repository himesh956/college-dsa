#include <bits/stdc++.h>
using namespace std;

int main () {
	// your code goes here
	int bs=12000;
	int age, exp;
	float da,hra,ta,gs ;
	
	
	cout << "enter your experiance : "<< endl;
	cin >> exp;
	 
	 cout << "enter your age : "<<endl;
	 cin >> age;
	 
	 if (exp>=12 && age <=30) {
	 da=bs* 0.06;
	 hra=bs* 0.20;
	 ta=bs* 0.05;
	 gs=bs+da+hra+ta;
	 cout << "\n ----salary detail----"<<endl;
	  cout << "da : " <<da << endl;
	 cout << "hra : "<< hra << endl;
	 cout << "ta : " <<ta << endl ;
	 cout << "gross salary : " <<gs<<endl; }
	 else {
	 cout<<"/n not eligible (if experiance<=12 years or elseage>=30years)" <<endl;
	 }
	 return 0;
	

}
