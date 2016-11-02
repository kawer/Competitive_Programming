//
//  main.cpp
//  SolveItNow
//
//  Created by Lazaro Kawer on 10/15/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    
    int t, a;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        cin >> a;
        double answer = (1/pow(a, 2));
        cout << setprecision(4) << fixed <<  answer << '\n';    }
    
    
    return 0;
}
