#include <iostream>


void startTask(std::string thing, int amount);


int main(){
    startTask("bat",20);
    return 0;
}

void startTask(std::string thing, int amount){
    std:: cout << "This is a " << thing <<  "." << "Amount is " << amount << ".";
}