#include<iostream>
using namespace std;
int main()
{
	cout<<"This program to find greater number: "<<endl;
	int num1,a,b=0;
	cout<<"Enter how many number you want to compare: "<<endl;
	cin>>num1;
	for (int i=0; i<num1; i++)
	{
		cout<<"Enter numbers: "<<endl;
		cin>>a;
		if (b<a)
		{
			b=a;
		}
		
	}
	cout<<"The greater number is\a "<<b;
}
