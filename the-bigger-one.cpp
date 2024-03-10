#include<iostream>
using namespace std;

int main(){
    int x, y, z;
    cout << "Introduce 3 numbers"<<endl;
    cin >> x>> y>> z;

    if(x>y){
        if(x>z) cout << "The bigger number is " << x <<endl;
        else cout << "The bigger number is " << z <<endl;
    }
    else cout << "The bigger number is " << y <<endl;

}