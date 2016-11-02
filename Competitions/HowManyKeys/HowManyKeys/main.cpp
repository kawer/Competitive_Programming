//
//  main.cpp
//  HowManyKeys
//
//  Created by Lazaro Kawer on 10/6/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
   
    int n;
    string key;
    set <string> L;
    
    cin >> n;
    for(int i = 0; i<n; i++) {
        cin >> key;
        sort(key.begin(), key.end());
        L.insert(key);
    }
    
    cout << L.size() << "\n";

    
    
    
    return 0;
}
