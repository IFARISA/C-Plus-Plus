/* to find the discount and total bill after discount
1)bill is less than 1000  no discount 
2)bill is greater than or equal to 1000 and less than 2000 than 10% discount
3)bill is greater than or equal to 2000 and less than 5000 than 20% discount
4)if bill is greater or equal to 5000 discount 30%
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	
	int number=100;
	while (true)
	
	{
		number++;
		if(number==200)
		{
			number=101;
		}
			
		
		cout<<"Bill number: "<<number<<endl;
	double bill;
	double discount,total_bill;
	string name="\nFaris Company,thanks for shoping";
	
	cout<<"Enter your bill: "<<endl;
	
	cin>>bill;
	
	if (bill<1000)
	{
		cout<<"Your bill has no discount."<<endl;
		cout<<"your bill= "<<bill<<" SAR "<<endl;
		cout<<name<<endl;
		cout<<"_____________________________________"<<endl;
	}
	else if (bill>=1000 && bill<2000)
	{
		discount=bill*0.10;
		total_bill=bill-discount;
		cout<<"your bill   = "<<bill<<" SAR "<<endl;
		cout<<"Discount    = "<<discount<<" SAR "<<endl;
		cout<<"Totel bill  = "<<total_bill<<" SAR "<<endl;
		cout<<name<<endl;
		cout<<"_____________________________________"<<endl;
	}
	else if (bill>=2000 && bill<5000)
	{
		discount=bill*0.20;
		total_bill=bill-discount;
		cout<<"your bill   = "<<bill<<" SAR "<<endl;
		cout<<"Discount    = "<<discount<<" SAR "<<endl;
		cout<<"Totel bill  = "<<total_bill<<" SAR "<<endl;
		cout<<name<<endl;
		cout<<"_____________________________________"<<endl;
	}
	else if (bill>=5000)
	{
		discount=bill*0.30;
		total_bill=bill-discount;
		cout<<"your bill   = "<<bill<<" SAR "<<endl;
		cout<<"Discount    = "<<discount<<" SAR "<<endl;
		cout<<"Totel bill  = "<<total_bill<<" SAR "<<endl;
		cout<<name<<endl;
		cout<<"_____________________________________"<<endl;
	}
	
	//	system("pause");

   }
	
	
}
