#include<iostream>
using namespace std;
template<class t>
t larger(t a,t b,t c)
{ 
    cout<<"enter three nos";
    cin>>a>>b>>c;
	a>b&&a>c?cout<<"a is largest":b>c?cout<<"b is largest":cout<<"c is largest";
	 
}
	 int main()
	 {
	 	int a, b,c;
	 	float e,f,g;
	 	 char ch;
	 cout<<"enter the choice of your datatype\n I for interger \n F for float\n";
	 	 cin>>ch;
	 	 switch(ch)
	 {
	 		case 'I':larger(a,b,c);
	 	break;
	 		case 'F':larger(e,f,g);
		 break;}
	 	return 0;
	 }