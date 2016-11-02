//
//  main.cpp
//  moveDogAround
//
//  Created by Lazaro Kawer on 10/4/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int n, m, xf, yf, count;
    
    cin >> n >> m >> yf >> xf >> count;
    
    for(int i = 0; i < count; i++){
        string dir;
        int move;
        cin >> dir >> move;
        if(dir == "E")
            xf -= move;
        if(dir == "W")
            xf += move;
        if(dir == "N")
            yf -= move;
        if(dir == "S")
            yf += move;
        
    }

    cout << xf << " " << yf << endl;
    
    return 0;
}
