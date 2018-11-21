//library
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the length of the array:-"; //asking for array length
	cin>>a;
	int aray[a];
	cout<<"Start entering the data"<<endl; //taking input numbers
	for(int i=0;i<a;i++) //loop for filling array
	{
		cin>>aray[i];
	}
	int sum=0;
	for(int i=0;i<a;i++)
	{
		sum+=aray[i]; //taking sum of the enteries
	}
	cout<<"The sum of the elements is:-"<<sum<<endl;
	return 0;
}


