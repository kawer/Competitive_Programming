//
//  main.cpp
//  UnionOfSets
//
//  Created by Lazaro Kawer on 10/24/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <string>
#include <set>

using namespace std;
int main(int argc, const char * argv[]) {
    int t, n;
    int num;
    set<int> numeros;
    
    cin >> t;
    
    for(int j=0; j<t; j++){
        cin >> n;
        for(int i =0; i<n; i++){
            cin >> num;
            numeros.insert(num);
            
        }
    }
    
    cout << numeros.size();

    return 0;
}
