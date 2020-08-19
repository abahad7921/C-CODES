#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
    
    //The boolean vector is intialised with n+1 numbers as
    //the indexing in the array follows from 0 to n-1
    //but the range we are taking is from 1 to n

    vector<bool>check(n+1,true);
    
    //this boolean vector is made to keep a track of the elements which are divided
    //by the previous numbers

    check[0]=false;//As 0 and 1 are not prime we simply make them false at the begining
    check[1]=false;
    
	for(int i=2;i*i<=n;i++)
	{
        for(int j=i*2;j<=n;j+=i)
        {
        	check[j]=false;
        }
	}

	for(int i=1;i<=n;i++)
	{
		if(check[i])
			cout<<i<<" ";
	}
    cout<<endl;

}