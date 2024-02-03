#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    scanf("%d", &n);

    long long int ans, k;
    long long int counter = 0, counter2 = 0;
    printf("%d\n", 0);
    for(long long int i = 2; i <= n; ++i) {
        k = i*i;
        ans = (k*(k-1))/2 - 8*(counter);
        counter2++;
        counter += counter2;
        printf("%lld\n", ans);
    }
    return 0;
}
