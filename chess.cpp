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
    // Yes it is...
    else{
        if((y1==y2)&&(x1==x2)) cout << "You did not move!" << endl;
        else if ((y1==y2)||(x1 == x2)){
            if((x1==x2)&&(y2-y1==1)) cout << "Valid for a pawn\n Valid for the king" << endl;
            if(abs(x1-x2)==1) cout << "Valid for the king" << endl;
            cout << "Valid for queen \n Valid for rook" << endl;
        }
        else if ((y1-y2)==(x1-x2)){
            if(abs(x1-x2)==1) cout << "Valid for the king" << endl;
            cout << "Valid for queen" << endl;
            cout << "Valid for the bishop" << endl;
        }
        else if ((x2-x1==1)||(x1-x2==1)){
            if(y2-y1==2 || y2-y1==2) cout << "Valid for the knight" << endl;
        }
        else if ((x2-x1==2)||(x1-x2==2)){
            if(y2-y1==1 || y2-y1==1) cout << "Valid for the knight" << endl;
        }
        else{
            cout << "Not valid movement" << endl;
        }
    }
    

}