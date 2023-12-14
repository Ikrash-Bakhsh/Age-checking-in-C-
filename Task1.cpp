#include<iostream>
using namespace std;
int main ()
{
	int a;
	cout<<"Enter Your Age:";
	cin>>a;
	if(a<=12)
	{
		cout<<"Kid\n";
		cout<<"Dude you're a kid go and do your homework";
	}
	else if(a>=13&&a<=19)
	{
		cout<<"Teenageer\n";
		cout<<"Allowed";
	}
	else if(a>=20&&a<=30)
	{
		cout<<"Young Adults\n";
		cout<<"Allowed";
	}
	else if(a>=31)
	{
		cout<<"Adults\n";
		cout<<"Allowed";
	}

}
