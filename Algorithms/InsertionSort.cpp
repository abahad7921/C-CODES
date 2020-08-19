#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;//take the size of the array

	int a[n],value,pos;
	for(int i=0;i<n;i++)
		cin>>a[i];

	for(int i=1;i<=n-1;i++)
	{
        value= a[i];
        pos=i;
        while(a[pos-1]>value && pos>=1)
        {
        	a[pos]=a[pos-1];
        	pos--;
        }
        a[pos]=value;
	}

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

