#include<iostream>
using namespace std;
const float tax=0.15;
int main()
{
	float bill,totel_bill,tax_bill;
	cout<<"Enter your bill\a: ";
	cin>>bill;
	tax_bill=bill*tax;
	totel_bill=bill+tax_bill;
	cout<<"your bill       = "<<bill<<endl;
	cout<<"Tax 15%         = "<<tax_bill<<endl;
	cout<<"Your Totel Bill = "<<totel_bill;	
}
