#include <iostream>

namespace me{
    std::string name  = "Samir";
    int age = 22;
}

namespace another{
    std::string name  = "Anon";
    int age = 22;
}

int main(){
    using namespace another;
    std::string myName = me::name;
    std::cout <<myName << ". And my age is " << me::age << "." << std::endl;
    std::cout << name << std::endl;
    int student = 0;
    for(int i=0; student < 20; i++){
        student++;
        std::cout << i << std::endl;
    }
    int num = 0;
    while(num<20){
        num ++;
        std::cout << "okay" << std::endl;
    }
    return 0;
}   