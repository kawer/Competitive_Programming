//
//  main.cpp
//  HugoHomework
//
//  Created by Lazaro Kawer on 10/17/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main() {
    
    string n;
    unsigned long long iN;
    unsigned long long iS;
    cin >> n;
    unsigned long long count = 0;
    string sorted;
    
    do {
    sorted = n;

    sort(sorted.begin(),sorted.end());
    
    
    iN = atoi(n.c_str());
    iS = atoi(sorted.c_str());
    
    iN -= iS;
    n = to_string(iN);
    
    count++;
    
    }while(iN != 0);
    
    cout << count << endl;
        
    return 0;
}
