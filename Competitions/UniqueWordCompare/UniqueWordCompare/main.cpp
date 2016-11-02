//
//  main.cpp
//  UniqueWordCompare
//
//  Created by Lazaro Kawer on 10/26/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);
    string first,second,only1st,only2nd,both;
    getline(cin,first);
    getline(cin,second);
    for(int i = 0; i < first.length(); i++)
    {
        if(second.find(first[i]) != string::npos)
        {
            both += first[i];
        }
        else
            only1st += first[i];
    }
    for(int i = 0; i < second.length(); i++)
    {
        if(first.find(second[i]) == string::npos)
        {
            only2nd += second[i];
        }
    }
    cout<<"First:"<<only1st<< endl <<"Second:"<<only2nd<< endl <<"First&Second:"<<both<< endl;
    return 0;
}
