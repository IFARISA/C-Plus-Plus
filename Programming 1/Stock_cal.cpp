#include<iostream>//
using namespace std;//
int main()// 
{
	float first_price,last_price,sum=0,quantity,total=0;
	cout<<"Enter Avg Stock Price you have in portfolio: ";
	cin>>first_price;
	cout<<"Enter Last Stock Price: ";
	cin>>last_price;
	cout<<"Enter there Quantity:\t";
	cin>>quantity;
	sum=last_price-first_price;
	total=sum*quantity;
	cout<<endl;
	cout<<"--------------------------------\n";
	cout<<"Earning in each Stock:\t";
	cout<<"= "<<sum<<endl;
	cout<<"\aTotal Earning = "<<total<<endl;
	//cout<<"\n";
	system("pause");
	
}
