//Scope Resoluion operator and namespace demo
#include<iostream>
using namespace std;
int x=10;//global variable 
namespace Demo
{
	int x=20;
}
main()
{
	int x=30;
	cout<<"Global variable value x:"<<::x;
	cout<<"scope resolution variable value x:"<<x<<endl;
	cout<<"namespace variable value x:"<<Demo::x;
}

	