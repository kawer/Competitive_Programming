//
//  main.cpp
//  StrangeDialog
//
//  Created by Lazaro Kawer on 10/26/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    string out = "out";
    string output ="output";
    string puton ="puton";
    string in = "in";
    string input ="input";
    string one ="one";
    unsigned long long pos;
    while(n--){
        string word;
        cin >> word;
        long lenWord = word.length();
        while(lenWord!=0){
        while(word.find("output")!=std::string::npos){
            pos = word.find("output");
            if(pos != std::string::npos){
                word.erase(pos, output.length());
                lenWord -= output.length();
            }
            if(word.empty()){
                break;
            }
                
        }
        while(word.find("puton")!=std::string::npos){
            pos = word.find("puton");
            if(pos != std::string::npos){
                word.erase(pos, puton.length());
                lenWord -= puton.length();
            }
            if(word.empty()){
                break;
            }
        }
        while(word.find("out")!=std::string::npos){
            pos = word.find("out");
            if(pos != std::string::npos){
                word.erase(pos, out.length());
                lenWord -= out.length();
            }
            if(word.empty()){
                break;
            }
        }
        while(word.find("input")!=std::string::npos){
            pos = word.find("input");
            if(pos != std::string::npos){
                word.erase(pos, input.length());
                lenWord -= input.length();
            }
            if(word.empty()){
                break;
            }
        }
        while(word.find("in")!=std::string::npos){
            pos = word.find("in");
            if(pos != std::string::npos){
                word.erase(pos, in.length());
                lenWord -= in.length();
            }
            if(word.empty()){
                break;
            }
        }
        while(word.find("one")!=std::string::npos){
            pos = word.find("one");
            if(pos != std::string::npos){
                word.erase(pos, one.length());
                lenWord -= one.length();
            }
            if(word.empty()){
                break;
            }
        }
    }
        if(word.length() == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}


//"out"  "output"  "puton" "puton" "in" "input" "one"
// find, de donde comienza, borrar length de word. hacer eso para todas, ver si word.empty
