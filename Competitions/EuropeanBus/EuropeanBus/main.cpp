//
//  main.cpp
//  EuropeanBus
//
//  Created by Lazaro Kawer on 10/10/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

    string word;
    
    cin >> word;
    
    unsigned long long numberW = 1;
    
    for(int i = 0; i < word.length(); i++) {
        if(word[i] >= 'A' && word[i] <= 'Z'){
        numberW *= (word[i] - 64);
        numberW %= 26;
        }
    }
    
    if(numberW  < 10){
        cout << "0";
    }
        
    cout << (numberW % 26) << endl;
    
    
    return 0;
}
