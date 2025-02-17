// 2021-09-06, check it's even or odd number
#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter any number to check it's even or odd number: "<<endl;
	cin>>number;
	if (number%2==0)
	{
		cout<<"Even number\a"<<endl;
	}
	else 
	{
		cout<<"Odd number\a"<<endl;
	}
}
