#include <iostream>
int main() {
    int binary;
    std::cin>>binary;
    int decimal=0;
    int i=1;
    while(binary>0){
        decimal+=(binary%10)*(i);
        binary=binary/10;
        i*=2;
    }
    std::cout<<decimal;
}
