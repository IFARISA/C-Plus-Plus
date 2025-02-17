#include<iostream>
using namespace std;
int main()
{
	for(int line=10; line>=1; line--) 
	{
		for(int star=1; star<=line; star++)
		{
			cout<<"*\a";
		}
		cout<<"\n";
	}
	
}
