
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the length of the first array:-";
	cin>>a;
	int aray[a];
	cout<<"Start entering the first array data"<<endl;
	for(int i=0;i<a;i++)
	{
		cin>>aray[i];
	}
	int b;
	cout<<"Enter the length of the second array:-";
	cin>>b;
	int aray1[b];
	cout<<"Start entering the second array data"<<endl;
	for(int i=0;i<b;i++)
	{
		cin>>aray[i];
	}
	int aray2[a+b];
	for(int i-0;i<a;i++)
	{
		aray2[i]=aray[i];
	}
	for(int i=0;i<b;i++)
	{
		aray2[a+i]=aray1[i];
	}
	int c;
	//sorting by bubble sort
	for(int i=0;i<a+b;i++)
	{
		for(int j=0;j<(a+b-i);j++)
		{
			if(aray[j]>aray[j+1])
			{
				c=aray[j];
				aray[j]=aray[j+1];
				aray[j+1]=c;
			}			
		}
	}
	cout<<"The smallest element is "<<aray[0];	
	cout<<"The largest element is "<<aray[a+b];
}

