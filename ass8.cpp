#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	cout<<"Enter the numbers : ";
	int x,y;
	cin>>x>>y;
	cout<<"Values before swapping : "<<"x = "<<x<<" y = "<<y<<endl;
	x=y-x;
	y-=x;
	x+=y;
	cout<<"Values after swapping : "<<"x = "<<x<<" y = "<<y<<endl;
	
	return 0;
	
}
