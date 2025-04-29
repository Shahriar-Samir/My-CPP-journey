#include <iostream>


int calculator(char type ,double a, double b){
    std:: cout << type;
    if(type =='+'){
        double result = a+b;
        std::cout << "result :" << result << std::endl;
    }
    else if(type == '-'){
        std::cout << a-b;
    }
    else if(type == '*'){
        std::cout << a*b;
    }
    else if(type == '/'){
        std::cout << a/b;
    }

    else{
        std::cout << "Invalid operator";
    }

    return 0;
}

int main(){
    using namespace std;
    char opt;
    double number1;
    double number2;
    cout << "Welcome to the calculator" << endl;
    cout << "Select an operator"<< endl;
    cin >> opt;
    cout << "Enter Number 1 :"<< endl;
    cin >> number1;
    cout << "Enter Number 2 :"<< endl;
    cin >> number2;
    calculator(opt, number1, number2);
    return 0;
}