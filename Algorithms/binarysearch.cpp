#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    
    vector<int>A={10,13,55,66,77,86};
    
    sort(A.begin(),A.end());
    cout<<"sorted array is:";
      for(int i=0;i<A.size();i++)
         cout<<A[i]<<" ";
         
         cout<<endl;
         
         
    int high= A.size()-1;
    int low=0;
    int num=55;
    int middle= (high+low)/2;
    
    while(low<=high)
    {
         if(A[middle]==num)
         {    cout<<"found at index:"<<middle+1<<endl;
              break;
         }
         else if(A[middle]<num)
              low= middle+1;
         else
              high= middle-1;
              
         middle= (high+low)/2;
         
    }
    if(low>high)
       cout<<"no found"<<endl;
       
}              
