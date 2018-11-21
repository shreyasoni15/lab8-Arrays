#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the length of the array:-";
	cin>>a;
	int aray[a];
	cout<<"Start entering the data"<<endl;
	for(int i=0;i<a;i++)
	{
		cin>>aray[i];
	}
	int b;
	//sorting by bubble sort
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<(a-i);j++)
		{
			if(aray[j]>aray[j+1])
			{
				b=aray[j];
				aray[j]=aray[j+1];
				aray[j+1]=b;
			}			
		}
	}
	cout<<"Which smallest number do you want to find?";
	cin>>b;
	cout<<"the number is"<<aray[b];
	cout<<"Which largest number do you want to find?";
	cin>>b;
	cout<<"the number is"<<aray[a-b];
	return 0;
}
