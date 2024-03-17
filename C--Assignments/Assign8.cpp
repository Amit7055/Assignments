/*
8.Print the average of three numbers entered by the user by creating a class named 'Average' having a
function to calculate and print the average without creating any object of the Average class.
*/

#include<iostream>
using namespace std;

class avearge
{
	private:
		int a,b,c;
		static int call;
	public:
		avearge(int a,int b,int c)
		{
			call=a+b+c;
			call=call/3;
			cout<<"\nAverage = "<<call;
		}
};

int avearge::call=0;

main()
{
    int x,y,z;
	cout<<"-------------------------------------"<<endl;
	cout<<"Enter Three Number: ";
	cin>>x>>y>>z;
	cout<<"-------------------------------------"<<endl;
	avearge a1(x,y,z);
}
