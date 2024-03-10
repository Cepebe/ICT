#include <iostream>
using namespace std;

int main(){
    float side1, side2, side3;
    bool good_triangle = true;

    cout << "*************************************" << endl;
    cout << "******         WELCOME        *******" << endl;
    cout << "*************************************" << endl;
    cout << "\n";

    cout << "Please introduce the first side of the triangle" << endl;
    cin >> side1;
    if(side1 < 0) good_triangle = false; 
    cout << "Please introduce the second side of the triangle" << endl;
    cin >> side2;
    if(side2 < 0) good_triangle = false;
    cout << "Please introduce the third side of the triangle" << endl;
    cin >> side3;
    if(side3 < 0) good_triangle = false;

    if(good_triangle == true){
        if((side1+side2)<=side3) cout << "This cannot be a triangle";
        else if((side1+side3)<=side2) cout << "This cannot be a triangle";
        else if((side2+side3)<=side1) cout << "This cannot be a triangle";
        else{
            if(side1==side2){
                if (side1 == side3) cout << "Is equilateral"<< endl;
                else cout << "Is isosceles" << endl;
            }
            else if(side2==side3){
                if(side1 != side3) cout << "Is isosceles" << endl;
            }
            else if(side1 == side3){
                if(side1 != side2) cout << "Is isosceles" << endl;
            }
            else{
                cout << "Is scalene" << endl;
            }
        }
    }
    else{
        cout << "You must enter positive lengths" << endl;
    }

}