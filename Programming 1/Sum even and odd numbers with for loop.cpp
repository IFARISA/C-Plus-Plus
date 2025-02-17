#include<iostream>
using namespace std;
int main()
{
	int number,sumeven,sumodd;
	for (int i=1; i<=10; i++)
	{
		cout<<"Enter number \n";
		cin>>number;
		if (number%2==0)
		sumeven=sumeven+number;
		else
		sumodd=sumodd+number;
	}
	cout<<"the sum of even numbers= "<<sumeven<<endl;
	cout<<"the odd of even numbers= "<<sumodd<<endl;

}

