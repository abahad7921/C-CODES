#include <iostream>

//ya, I know there's a function in the STL Library for GCD
//the function is __gcd()

int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}
long long gcd_fast(int a,int b)
{
    if(b==0)
       return a;
    
    else
       return gcd_fast(b,a%b);  
       } 


int main() {
  int a, b;
  std::cin >> a >> b;
  
  //if(a>b)
    std::cout << gcd_fast(a, b) << std::endl;
  
 // else
   // std::cout << gcd_fast(b, a) << std::endl; 	 
  // if(gcd_naive(a,b)==gcd_fast(a,b))
    //  std::cout<<"yes\n";
      
   //else
     // std::cout<<"no\n";   
  return 0;
}
