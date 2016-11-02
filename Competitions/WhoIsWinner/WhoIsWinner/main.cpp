//
//  main.cpp
//  WhoIsWinner
//
//  Created by Lazaro Kawer on 10/19/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    double sc, tScore=0.0;
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> sc;
        tScore += sc;
    }
    
    tScore = (tScore/n);
    cout << setprecision(2) << fixed <<  tScore << '\n';
    
    return 0;
}
