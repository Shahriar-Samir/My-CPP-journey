#include <iostream>

// area of a right angled triangle

int main(){
    double a;
    double b;
    std:: cout << "a = ? ";
    std:: cin >> a; 
    std:: cout << "b = ? ";
    std:: cin >> b;
    std:: cout << "c = " << sqrt(pow(a,2)*pow(b,2)) << std:: endl;
    return 0;
}