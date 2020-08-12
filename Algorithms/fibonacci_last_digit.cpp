#include <iostream>

long long get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current;
}
long long get_fibonacci_last_digit_fast(long long n) {
    
    long long f[n];
    f[0]=0;
    f[1]=1;
    
    for(long long i=2;i<=n;i++)
        f[i]=(f[i-1]%10+f[i-2]%10)%10;

    return f[n];
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_fast(n);
    std::cout << c <<'\n';
///if(get_fibonacci_last_digit_naive(n)==get_fibonacci_last_digit_fast(n))
       //  std::cout<<"yes\n";
    //else
      //   std::cout<<"no\n";     
    }
