#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   
char x;
cin>>x;
int a,b;
cin>>a>>b;
cout <<endl<<"enter your choice :(+,-,*,/,%)";
switch(x)
{
    case 'a':cout<<endl<<"+ operator:"<<a+b;
    break;
    case 'b':cout<<endl<<"- operator:"<<a-b;
    break;
     case 'c':cout<<endl<<"* operator:"<<a*b;
    break;
     case 'd':cout<<endl<<"/ operator:"<<a/b;
    break;
     case 'e':cout<<endl<<"% operator:"<<a%b;
    break;
    default: cout<<endl<<"you have enter a wrong choice";
    break;
}
return 0;
}

