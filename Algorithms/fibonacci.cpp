#include <iostream>
#include <cassert>

// The following code calls a naive algorithm for computing a Fibonacci number.

int fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

long long fibonacci_fast(int n) {
    // write your code here
    long long f[n];
    f[0]=0;
    f[1]=1;
    
    for(long long i=2;i<=n;i++)
        f[i]=f[i-1]+f[i-2];

    return f[n];
}

void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}

int main() {
    int n = 0;
    std::cin >> n;

   // std::cout << fibonacci_naive(n) << '\n';
    //  test_solution();
      std::cout << fibonacci_fast(n) << '\n';
  // if(fibonacci_fast(n)==fibonacci_naive(n))
    //std::cout<<"correct\n";
   //else
     //std::cout<<"incorrect\n";   
    return 0;
}
