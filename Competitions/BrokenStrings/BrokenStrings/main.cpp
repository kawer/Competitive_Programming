//
//  main.cpp
//  BrokenStrings
//
//  Created by Lazaro Kawer on 10/26/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

# include <iostream>
# include <map>

using namespace std;


map< int, string> Strings;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string passw;
        cin>>passw;
        Strings[i] = passw;
    }
    for(int i = 0;i<t;i++)
    {
        int b = 0;
        int r = 0;
        int o = 0;
        int k = 0;
        int e = 0;
        int n = 0;
        for(int j=0;j<Strings[i].size();j++)
        {
            string temp = Strings[i];
            switch(temp[j])
            {
                case 'B':
                    b++;
                    break;
                case 'R':
                    r++;
                    break;
                case 'O':
                    o++;
                    break;
                case 'K':
                    k++;
                    break;
                case'E':
                    e++;
                    break;
                case 'N':
                    n++;
                    break;
            }
        }
        if(b == r && r == o && o == k && k == e && e == n)
            cout<<"No Secure"<< endl;
        else
            cout<<"Secure"<< endl;
    }
    
    return 0;
}
