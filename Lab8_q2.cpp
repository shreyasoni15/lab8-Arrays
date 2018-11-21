//largest,smallest,average,median,highest frequency.
//library
#include<iostream>
using namespace std;
int mostfrequent(int aray[], int n) 
{ 
	int maxcount = 1, res = aray[0], currentcount = 1; 
	for(int i = 1; i < n; i++)
	{ 
		if (aray[i] == aray[i - 1]) 
		{currentcount++;} 
	else 
	{ 
		if (currentcount > maxcount)
		{ 
	                maxcount = currentcount; 
	                res = aray[i - 1]; 
		}
		currentcount = 1; 
	}
}
  
    // If last element is most frequent 
	if (currentcount > maxcount) 
	{
		maxcount = currentcount; 
		res = aray[n - 1]; 
	}
	return res; 
} 
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
	int sum=0;
	b=aray[0];
	for(int i=0;i<a;i++)
	{
		
		sum+=aray[i];
	}
	cout<<"The largest element in the array is "<<aray[a-1]<<endl;
	cout<<"The smallest element in the array is "<<aray[0]<<endl;
	cout<<"The Average of the elements is:-"<<(sum/a)<<endl;
	if(a%2==0)
	{cout<<"median is"<<((aray[a/2]+aray[(a+2)/2])/2)<<endl;}
	else
	{cout<<"the median is"<<aray[(a+1)/2]<<endl;}
	cout<<"the element with the highest frequency is "<<mostfrequent(aray,a);
	return 0;
}
