
#include <iostream>
using namespace std;


int main() {
    int t;
    long long side;
    scanf("%d", &t);
    
    while (t--) {
        scanf("%lld", &side);
        printf("%lld\n", 3*side*side + 2);
    }
    return 0;
}
