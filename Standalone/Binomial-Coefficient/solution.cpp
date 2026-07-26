#include <iostream>
int factorial(int n){
    if (n==0 || n==1) return 1;
    else{
        return n*factorial(n-1);
    }
}
int main() {
    int n,r;
    std::cin>>n>>r;
    int bin=factorial(n)/(factorial(r)*factorial(n-r));
    std::cout<<bin;
}
