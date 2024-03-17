/*
5.Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by
creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and
breadth are passed as parameters to its constructor.
*/

#include<iostream>
using namespace std;

class rectangles{
	private:
		int a,b,area;
	public:
		int rectangl(int x,int y)
		{
			a=x;
			b=y;
			area=x*y;
			return(area);
		}
};

main()
{
	cout<<"-----------\n";
	cout<<"First area:";
	rectangles r1;
	cout<<r1.rectangl(4,5);

	
	cout<<"\n-----------";
	cout<<"\nFirst area:";
	rectangles r2;
	cout<<r2.rectangl(5,8);
}
