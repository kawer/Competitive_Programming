#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;


int main()
{
    int T;
    cin >> T;
    unsigned long long N;
    
    for (int i=1; i <= T; i++) {
        cin >> N;
        cout << "Case "<< i <<": ";
        long double N_Flotante = N/5.0;
        
        if (N % 5 == 0) {
            cout << N/5 << endl;
        }
        else {
            int pEntera = (int)N_Flotante;
            cout << pEntera << ",";
            //double pFlotante = N_Flotante - pEntera;
            double pFlotante = (10*(N_Flotante - pEntera));
            cout << pFlotante << endl;
        }
    }
}
