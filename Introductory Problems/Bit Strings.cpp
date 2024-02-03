#include <iostream>
using namespace std;

constexpr int MOD = 1e9+7;

int main() {
    int n;
    scanf("%d", &n);

    long long int ans = 1;

    long long int reszta = 1;
    long long int podstawa = 2;
    int potega = n;

    while(potega > 1) {
        if(potega%2 == 0) {
            podstawa *= podstawa;
            podstawa %= MOD;
            potega/=2;
        } else {
            reszta *= podstawa;
            reszta %= MOD;
            potega--;
        }
    }

    ans = (podstawa*reszta)%MOD;

    printf("%lld", ans);

    return 0;
}
