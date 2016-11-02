//
//  main.cpp
//  KingdomChampionship
//
//  Created by Lazaro Kawer on 10/11/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
  
    int n; //personas en el torneo
    int k; //cantidad de veces que gano cada uno
    int combates = 0;
    cin >> n;
    cin >> k;
 
    if(n%2 == 0) {
        if(k > ((n/2) - 1)) {
            cout << -1 << endl;
        }
        else{
            combates = n*k;
            cout << combates << endl;
        }
    }
    else {
        if(k> (n/2)) {
            cout << -1 << endl;
        }
        else {
            combates = n*k;
            cout << combates << endl;
        }
    }
    return 0;
}
