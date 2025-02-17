#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
using namespace std;
int main()
{
	int n1,n2,result;
	int score=0;
	
	srand(time(0));
	for (int i=1; i<=5; i++)
	{
		n1=1+rand()%10;
		n2=1+rand()%10;
		cout<<"Answer: "<<n1<<" X "<<n2<<" = ";
		cin>>result;
		if (result==n1*n2)
		score++; 
	}
	cout<<"your score "<<score<<" Out of 5";
}
