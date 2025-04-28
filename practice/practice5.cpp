#include <iostream>


int main(){
    double a =3;
    double b = 5;
    double c;
    double d;

    c = std::max(a,b);
    d = std::min(a,b);

    double z1 = sqrt(20);
    double z2 = ceil(20.5);
    double z3 = floor(20.5);
    std:: cout << c << std::endl;
    std:: cout << d << std::endl;
    std:: cout << z1 << std::endl;
    std:: cout << z2 << std::endl;
    std:: cout << z3 << std::endl;
    return 0;
}