/* to find the discount and total bill after discount
1)bill is less than 1000  no discount 
2)bill is greater than or equal to 1000 and less rhan 2000 than 10% discount
3)bill is greater than or equal to 2000 and less rhan 5000 than 20% discount
4)if bill is greater or equal to 5000 discount 30%
*/
#include<iostream>
using namespace std;
int main(){
	float bill,discount,totalbill;
	cout<<"\aEnter the bill ";
	cin>>bill;
	if (bill<1000)
	{
	discount=0.0;	
	}
	else if(bill>=1000 and bill<2000)
	{
	discount=0.10*bill;	
	}
	else if(bill>=2000 and bill<5000)
	{
	discount=0.20*bill;	
	}
        else
        {
        discount=0.30*bill;	
	}
	totalbill=bill-discount;
	cout<<"\nTotal Dicount = "<<discount<<"\tTotal Bill = "<<totalbill;
}






