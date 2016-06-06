#include <iostream>
using namespace std;
int bits(long long int k)
{
	int count=0;
	while(k)
	{
		if(k%2==1)
		count++;
		k=k/2;
	}
	return count;
}
int main() {
	long long int n,i,j,a[100000],bitcount[100000],t;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		bitcount[i]=bits(a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(bitcount[j]>bitcount[j+1])
			{
				t=bitcount[j];
				bitcount[j]=bitcount[j+1];
				bitcount[j+1]=t;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				
			}
			else if(bitcount[j]==bitcount[j+1])
			{
				if(a[j]>a[j+1])
				{
					t=bitcount[j];
				bitcount[j]=bitcount[j+1];
				bitcount[j+1]=t;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				}
			}
		}
	}
	for(i=n-1;i>=0;i--)
	cout<<a[i]<<" ";
	// your code goes here
	return 0;
}
