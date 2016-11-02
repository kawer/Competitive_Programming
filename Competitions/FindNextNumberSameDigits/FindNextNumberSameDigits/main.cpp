//
//  main.cpp
//  FindNextNumberSameDigits
//
//  Created by Lazaro Kawer on 10/19/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int findNextNumberSameDigits(string n){
    int x;
    for(int i =0; i < n.length(); i++) {
    x = n[i];
    }
    return  (n[0]-'0');
}

int main() {
    string n;
    cin >> n;
    int ans;
    ans = findNextNumberSameDigits(n);
    cout << ans;
    
    return 0;
}
//123456784987654321
//start with a number
//
//123456784 987654321
//^the first place from the right where the left-digit is less than the right
//Digit "x" is 4
//
//123456784 987654321
//^find the smallest digit larger than 4 to the right
//
//123456785 4 98764321
//^place it to the left of 4
//
//123456785 4 12346789
//123456785123446789
//^sort the digits to the right of 5.  Since all of them except
//the '4' were already in descending order, all we need to do is
//reverse their order, and find the correct place for the '4'
