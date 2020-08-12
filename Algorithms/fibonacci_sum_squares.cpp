#include <iostream>

int fibonacci_sum_squares_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current * current;
    }

    return sum % 10;
}
int fibonacci_sum_squares_fast(long long n) {
    
    long long f[n],sum=1;
    f[0]=0;
    f[1]=1;
    
    for(long long i=2;i<=n;i++)
    {
           f[i]=f[i-1]+f[i-2];
           
           sum+= (f[i]%10) *  (f[i]%10);
    }

    return sum%10;
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_squares_naive(n)<<" "<<fibonacci_sum_squares_fast(n);
}
