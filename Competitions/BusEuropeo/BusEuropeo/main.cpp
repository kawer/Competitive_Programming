//
//  main.cpp
//  BusEuropeo
//
//  Created by Lazaro Kawer on 10/10/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int t, s;
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cin >> s;
        int nPass = 0;
        double result;
        //        for (int j = 1; j <= s; j++) {
        nPass = (pow(2, s));
        //        }
        nPass -= (0.5*2);
        if ((nPass%2) == 0)
            result = nPass + (0.5*s);
        else
            result = nPass - (0.5*s);
        
        cout << nPass << endl;
        
    }
    
}

