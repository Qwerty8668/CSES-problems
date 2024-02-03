#include <bits/stdc++.h>
using namespace std;

//int grid[1000][1000];

int main() {

    int t;
    scanf("%d", &t);
//    int x = 2, y = 1;
//    int counter = 2;
//    grid[1][1] = 1;
//    grid[1][2] = 2;
//    bool goraCzybok = true; //true to gora, false to bok
//    for(int i = 2; i < 1000; ++i) {
//        if(goraCzybok) {
//            for(int j = 0; j < x-1; ++j) {
//                counter++;
//                y++;
//                grid[y][x] = counter;
//            }
//            for(int j = 0; j < y-1; ++j) {
//                counter++;
//                x--;
//                grid[y][x] = counter;
//            }
//            counter++;
//            y++;
//            grid[y][x] = counter;
//            goraCzybok = false;
//        } else {
//            for(int j = 0; j < y-1; ++j) {
//                counter++;
//                x++;
//                grid[y][x] = counter;
//            }
//            for(int j = 0; j < x-1; ++j) {
//                counter++;
//                y--;
//                grid[y][x] = counter;
//            }
//            counter++;
//            x++;
//            grid[y][x] = counter;
//            goraCzybok = true;
//        }
//
//    }
//    for(int i = 1; i < t; ++i) {
//        for(int j = 1; j < t; ++j) {
//            printf("%d ", grid[i][j]);
//        }
//        printf("\n");
//    }

    long long int y, x;
    long long int ans;
    while(t--) {
        scanf("%lld%lld", &y, &x);
        if(y >= x) {
            if(y%2 == 0) {
                ans = y*y - x + 1;
            } else {
                ans = (y-1)*(y-1) + x;
            }
        } else {
            if(x%2 == 1) {
                ans = x*x - y + 1;
            } else {
                ans = (x-1)*(x-1) + y;
            }
        }
        printf("%lld\n", ans);
    }

    return 0;
}

//jezeli wysokosc nieparzysta, to x razy dodajemy jeden. potrem na zmiane dodajemy jeden
//jezeli wysokosc parzysta, to x razy odejkmujesmy jeden
