#include<iostream>
using namespace std;
int main()
{
	long int number,fact=1;
	for (number=1; number<=9; number++)
	{
		for (int i=1; i<=number; i++)
		fact=fact*i;
                cout<<"The factorial of "<<number<<" is "<<fact<<endl;
        }
	
	
}
