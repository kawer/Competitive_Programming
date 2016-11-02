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

using namespace std;

int main() {
    
    int m;
    int n;
    cin >> m;
    cin >> n;
    int prices[m];
    int moneyNeg = 0;
    int moneyPos = 0;
    
    
    for(int i = 0; i<m; i++) {
        cin >> prices[i];
    }
    
    sort(prices, prices+m);
    
    for(int j=0; j<n; j++) {
        if(prices[j] < 0) {
            moneyNeg -= prices[j];
        }
    }
    if(moneyNeg != 0) {
        printf("%d\n", moneyNeg);
    }
    else {
        printf("%d\n", moneyPos);
    }
    
    return 0;
}
