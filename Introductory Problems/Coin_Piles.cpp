//EXPLANATION AT THE END
//https://cses.fi/problemset/task/1754
#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    int a, b;   //number of coins in the first and second coin pile;
    int diff;
    while(t--) {
        cin >> a >> b;
        
        //if piles are equal at the start
        if(a == b) {
            if(a%3 == 0) cout << "YES\n";
            else cout << "NO\n";
            continue;
        }
        
        //if one of the piles is empty
        if(!a || !b) {      
            cout << "NO\n";
            continue;
        }

        //we want the variable 'a' to be the bigger pile
        if(b > a) swap(a,b); 
        
        diff = a - b;

        //b - diff == a - 2*diff
        if(diff <= b && (b-diff)%3 == 0) {
            cout << "YES\n"; 
        } else cout << "NO\n";
    }

    return 0;
}

/*EXPLANATION:
If you are consistently deleting two coins from the bigger pile and one from the smaller,
you will eventualy get to one of these two options:
1. smaller pile is empty;
2. piles are equal;
It is because by deleting coins like that, you are decreasing height diffrence between piles by one.
If the diffrence between these two piles is bigger than height of the smaller one, you will get to 
the option 1. But, if it is not the case, you will get two equal piles (you will decrese diffrence to zero).

From there, to maintain equality of those piles, you can combine two moves in one - deleting two coins from the 
first pile, and one coin from the second, and then vice versa - two coins from the second one, and one from the 
first. By that, you delete three coins from each stack, so to get to zero, the number of coins on the stack
must be divisible by three.

*/