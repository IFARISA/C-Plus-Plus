#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int n1,n2,s;
	int score{0};
	srand(time(0));
	for (int i=0; i<10; i++)
	{
		n1=1+rand()%10;
		n2=1+rand()%10;
		cout<<"What the result of  "<<n1<<" + "<<n2<<": ";
		cin>>s;
		if (s==n1+n2)
		score++;
	}
	cout<<"\t************************\n";
	cout<<"\t*Your score "<<score<<" Out of 10* "<<endl;
	cout<<"\t************************\n";
}

