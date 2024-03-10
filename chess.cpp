#include <iostream>
using namespace std;

int main(){
    int x1, y1, x2, y2;
    bool inside;
    cout << "Please introduce the coordinates of the first position (row and column)" << endl;
    cin >> x1 >> y1;
    cout << "Please introduce the coordinates of the second position (row and column)" << endl;
    cin >> x2 >> y2;

    // Is inside the board game?
    if((x1<1)||(x1>8)){
        cout << "Ups... you run too fast" << endl;
    }
    else if((x2<1)||(x2>8)){
        cout << "Ups... you run too fast" << endl;
    }
    else if((y2<1)||(y2>8)){
        cout << "Ups... you run too fast" << endl;
    }
    else if((y1<1)||(y1>8)){
        cout << "Ups... you run too fast" << endl;
    }
    else{
        if((y1==y2)&&(x1==x2)) cout << "You did not move!" << endl;
        else if ((y1==y2)||(x1 == x2)){
            cout << "Valid for queen; valid for rook" << endl;
        }
        else if ((y1-y2)==(x1-x2)){
            cout << "Valid for queen; not valid for rook" << endl;
        }
        else{
            cout << "Not valid movement for either queen or rook" << endl;
        }
    }
    

}