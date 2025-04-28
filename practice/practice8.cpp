#include <iostream>

int main(){
    using namespace std;
    string names[5] = {"Samir", "Sakib", "Habib", "Zayed","s"};
    cout << names[0] << endl;
    cout << names[1] << endl;
    cout << names[2] << endl;
    cout << names[3] << endl;
    cout << names[4] << endl;

    for(int i=0; i < 5; i++){
        cout << names[i] << endl;
    }
    return 0;
}