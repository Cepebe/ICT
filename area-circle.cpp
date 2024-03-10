/* In this exercise we need to compute the area and l*/
#include <iostream>
using namespace std;
int main(){
    double PI = 3.14159265359;
    float radii;

    cout << "Please introduce the radious of the circle" << endl;
    cin >> radii;
    if(radii<0) cout << "Circles doesn't have negative radius" <<endl;
    if(radii>0){
        cout << "You introduced the radious r="<<radii<<endl;
        cout << "The area of the circle is A="<<PI*radii*radii<<endl;
        cout << "The perimeter is p="<<2*PI*radii<<endl;
    }

}