#include <iostream>

using namespace std;


void makeAnArray(int a[], int length){
    for(int i=0; i<length ;i++){
        cout << "Add value for index " << i << endl;
        cin >> a[i];
    }
    for(int i=0; i<length ;i++){
        cout << a[i] << endl;
    }
}

int main(){
    int a[5];
    makeAnArray(a,5);
}