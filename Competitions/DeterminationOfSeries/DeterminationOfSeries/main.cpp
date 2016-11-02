////
////  main.cpp
////  Determinf0tionOfSeries
////
////  Created by Lazaro Kawer on 10/24/16.
////  Copyright © 2016 Kawer. All rights reserved.
////
//
#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, const char * argv[]) {
    int f0, f1, f2;
    while(cin >> f0 >> f1 >> f2) {
        int dif01 = f1 - f0;
        int dif12 = f2 - f1;
        int difFinal = dif12 - dif01;
        
        if (difFinal) {
            int d = f2;
            for(int i = 0; i < 3; i++) {
                dif12 += difFinal;
                d += dif12;
                cout << d << " \n"[i==2];
            }
        }
        else {
            cout << f2 + dif01 << " " << f2 + 2 * dif01 << " " << f2 + 3 * dif01 << endl;
        }
    }
    return 0;
}
