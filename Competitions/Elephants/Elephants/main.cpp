//
//  main.cpp
//  Elephants
//
//  Created by Lazaro Kawer on 10/12/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, m, maxW, totalW;
    cin >> t;
    
    
    for(int i = 0; i < t; i++){
        cin >> m;
        cin >> maxW;
        int weight[m];
        int numEle = 0;
        for(int k = 0; k < m; k++) {
            cin >> weight[k];
           
        }
        sort(weight, weight+m);
        totalW = weight[0];
        for(int j = 0; j < m; j++) {
            if(totalW < maxW) {
                if(totalW + weight[j]+1 < maxW) {
                    totalW += weight[j+1];
                    numEle ++;
                }
                else {
                    numEle ++;
                    break;
                }
                
            }
            
        }
        cout << numEle << endl;
        
    }
    
    return 0;
}
