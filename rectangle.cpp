#include <iostream>
using namespace std;

int main(){
    float side1, side2;
    float perimeter;

    cout << "Welcome to the rectangle world" << endl;
    cout << "Please introduce the two sides of the rectangle" << endl;
    cin >> side1 >> side2;

    perimeter = 2*(side1+side2);

    cout << "The perimeter of the rectangle is" << perimeter ;

}