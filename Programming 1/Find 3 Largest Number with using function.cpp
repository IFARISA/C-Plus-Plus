#include<iostream>
using namespace std;
int largest(int , int , int );
int main()
{
	int a,b,d,c;
	cout<<"Enter three numbers to show you largest one\a:"<<endl;
	
	cin>>a>>b>>d;
	c=largest(a,b,d);
	cout<<"the largect: "<<c;
}
int largest(int x , int y , int z )
{
if (x>y and x>z)
return x;
else if (y>x and y>z)
return y;
else 
return z;
}


