#include <iostream>
#include <vector>
//using std::vector;
using namespace std;
long long get_fibonacci_partial_sum_naive(long long from, long long to) {
    long long sum = 0;

    long long current = 0;
    long long next  = 1;

    for (long long i = 0; i <= to; ++i) {
        if (i >= from) {
            sum += current;
        }

        long long new_current = next;
        next = next + current;
        current = new_current;
    }
    return sum;
    //return sum % 10;
}
long long get_fibonacci_partial_sum_fast(long long from,long long to){
   long long f[to];
   f[0]=0;
   f[1]=1;
   long long sum=0;
   for(long long i=2;i<=to;i++)
   {
           f[i]=f[i-1]+f[i-2];    
   }
   for(long long i=from;i<=to;i++)
   {
            
                sum+=f[i];
             
   }   
   return sum;
   //return sum%10;
}
int main() {
    long long from, to;
    cin >> from >> to;
    //cout<<get_fibonacci_partial_sum_naive(from, to)<<'\n';
    cout<<get_fibonacci_partial_sum_fast(from,to);
    
    return 0;
}
