

#include <iostream>
using namespace std;

unsigned long long answer = 1;

unsigned long long factorialFunc(unsigned long long N) {
    if (N==0) return 1;
    return N * factorialFunc(N-1);
}

int main()
{
    
    unsigned long long N;
    cin >> N;
    int answer;
    
    for (int i=0; i < N; i++) {
        cin >> answer;
        cout << factorialFunc(answer) << endl;
    }
    
}
