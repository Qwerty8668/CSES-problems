#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    scanf("%d", &n);

    int x, poprzedni = 0;
    long long int ans = 0;
    while(n--) {
        scanf("%d", &x);
        if(poprzedni > x) ans += poprzedni-x;
        poprzedni = max(poprzedni,x);
    }

    printf("%lld\n", ans);


    return 0;
}
