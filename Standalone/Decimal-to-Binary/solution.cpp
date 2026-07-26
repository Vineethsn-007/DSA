#include <iostream>
int main() {
    int DecNo;
    std::cin>>DecNo;
    int binary=0,pow=1;
    while(DecNo>0){
        int rem=DecNo%2;
        DecNo=DecNo/2;
        binary+=(rem*pow);
        pow=pow*10;
    }
    std::cout<<binary;
}
