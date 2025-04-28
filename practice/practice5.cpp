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
    double z4 = pow(2,4);
    double z5 = round(20.8);
    double z6 = abs(-20.5);
    std:: cout << c << std::endl;
    std:: cout << d << std::endl;
    std:: cout << z1 << std::endl;
    std:: cout << z2 << std::endl;
    std:: cout << z3 << std::endl;
    std:: cout << z4 << std::endl;
    std:: cout << z5 << std::endl;
    std:: cout << z6 << std::endl;
    return 0;
}