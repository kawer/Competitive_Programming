//
//  main.cpp
//  SumaNumerosTraviesos
//
//  Created by Lazaro Kawer on 10/12/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

long long bitNum = 5;

void ConvertToBinary(long n)
{
//    string sNumber = to_string(n);
//    int numSize = sNumber.length();
//    
    
    if (n / 2 != 0) {
        ConvertToBinary(n / 2);
    }
    bitNum = (n % 2);
    cout << bitNum;

}

int main() {
    
    int x;
    cin >> x;
    
    ConvertToBinary(x);
    

    
    
    return 0;
}
