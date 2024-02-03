#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int n;
    scanf("%lld", &n);
    long long int ans = 0;
    long long int liczba = 5;
    while(n/liczba > 0) {
        ans += n/liczba;
        liczba *=5;
    }
    printf("%lld\n", ans);
    return 0;
}
