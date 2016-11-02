//
//  main.cpp
//  COJ
//
//  Created by Lazaro Kawer on 10/24/16.
//  Copyright © 2016 Lazaro Kawer. All rights reserved.
//

#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <fstream>
using namespace std;


struct canStruct
{
    canStruct(const std::string& name_, unsigned height_)
    : name(name_), height(height_) {}
    
    std::string name;
    std::string lname;
    unsigned height;
    
    void toLower() {
        lname = name;
        for (basic_string<char>::iterator p = lname.begin();
             p != lname.end(); ++p) {
            *p = tolower(*p);
        }
    }
    
    bool operator<(const canStruct &b) const
    {
        if (height==b.height)
            return lname < b.lname;
        return height > b.height;
    }
};



int main() {
    
    deque<string> fila;
    int n;
    string canCode;
    vector<int> toQueue;
    std::string name;
    unsigned height;
    
    do {
        
        cin >> n;
        
        int reserveThis = n;
        
        if (n == 0) {
            break;
        }
        
        std::vector<canStruct> cans;
        cans.reserve(reserveThis);
        
        for(unsigned i=0; i!=reserveThis; ++i)
        {

            std::cin >> name;
            std::cin >> height;
            
            cans.push_back(canStruct(name, height));
            cans[i].toLower();
        }
        
        std::sort(cans.begin(), cans.end());

        bool b = false;
        for (int i=0; i<reserveThis; i++)
        {
            if (!b)
                fila.push_back(cans[i].name);
            else
                fila.push_front(cans[i].name);
            b = !b;
        }

        
        std::cout << fila[0];
        for(int i =1; i<reserveThis; i++){
            std::cout << " " << fila[i];
        }
        std::cout << endl;
        
        cans.clear();
        fila.clear();
        
        
    } while (n != 0);
    
    
    return 0;
}
