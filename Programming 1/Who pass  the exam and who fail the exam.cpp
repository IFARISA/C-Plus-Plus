#include<iostream>
using namespace std;
int main()
{
	int student=1,pass=0,fail=0,mark=0;
	while(student<=10)
	{
	cout<<"Enter mark, 1 means passed and 2 failed:\n ";
	mark:
	cin>>mark;
	if (mark==1)
	{
	pass++;
	}
	else if (mark==2)
	{
	fail++;
	}
	else if (mark!=1 and mark!=2)
	goto mark;
	
	student++;
	}
	cout<<"passes = "<<pass<<"\nfailed = "<<fail;
	
		
}

