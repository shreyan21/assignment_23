#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{  
    int a[10];
    int i=0,sum=0;
    cout<<"Enter the numbers : ";
    for(i=0;i<10;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		sum+=a[i];
	}
	cout<<"Sum is "<<sum<<endl;
	return 0;
}
