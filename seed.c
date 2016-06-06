#include <iostream>
using namespace std;

int main() {
	long long int n,m,k,prod;
	cin>>n;
	m=n;
	n=n/2;
	while(n)
{
k=n;
prod=n;
while(k)
{
	prod=prod*(k%10);
	k=k/10;
}
if(prod==m)
cout<<n<<" ";
n--;
}
if(m==k)
	// your code goes here
	return 0;
}
