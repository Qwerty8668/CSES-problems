#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int n;
    scanf("%lld", &n);

    vector<int> sety[2];

    sety[0].push_back(n);

    bool ktorySet = 0;

    long long int suma;
    suma = (n*(n+1))/2;
    if(suma%2 == 1) {
        printf("NO\n");
        return 0;
    }

    printf("YES\n");

    bool mod = n%2;

    for(int i = n-1; i > 0; --i) {
        if(i%2 != mod) ktorySet = !ktorySet;
        sety[ktorySet].push_back(i);

    }

    int rozmiar;
    rozmiar = sety[0].size();

    printf("%d\n", rozmiar);

    for(int x : sety[0]) printf("%d ", x);

    printf("\n");

    rozmiar = sety[1].size();

    printf("%d\n", rozmiar);

    for(int x : sety[1]) printf("%d ", x);

    return 0;
}
