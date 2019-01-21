#include<iostream>
using namespace std;

int main()
{



	int x,y=0;
	int *p=&x;
	int*q=&y;
	x=5;
	y=6;
	cout<<x<<endl;
	cout<<y<<endl;cout<<p<<endl;cout<<q<<endl;cout<<*p<<endl;
	cout<<*q<<endl;
	int temp;
		int *temp1;
	temp=x;
	x=y;
	y=temp;
	temp1=p;
	p=q;
	q=temp1;
	
	cout<<x<<endl;
	cout<<y<<endl;cout<<p<<endl;cout<<q<<endl;cout<<*p<<endl;
	cout<<*q<<endl;
	return 0;
}