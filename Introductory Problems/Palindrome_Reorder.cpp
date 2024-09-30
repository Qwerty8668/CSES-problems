//https://cses.fi/problemset/task/1755/
#include <bits/stdc++.h>

using namespace std;

int main() {

    string word; 

    cin >> word;

    vector<int> letterCount(26, 0);

    for(char c : word) {
        letterCount[c-65]++;
    }

    int wordLength = word.length();

    string palindromeBeggining, palindromeEnd;
    string palindromeMiddle;

    bool isOdd = wordLength%2;

    bool foundMiddle = false;

    for(int i = 0; i < 26; ++i) {
        if(letterCount[i]%2) {

            if(!isOdd || foundMiddle) {
                cout << "NO SOLUTION\n";
                return 0;
            }

            foundMiddle = true;
            palindromeMiddle = i+65;
            letterCount[i]--;
        }

        palindromeBeggining.insert(palindromeBeggining.end(), letterCount[i]/2, i+65);
        palindromeEnd.insert(palindromeEnd.begin(), letterCount[i]/2, i+65);
    }

    cout << palindromeBeggining << palindromeMiddle << palindromeEnd <<'\n';

    return 0;
}

/*EXPLANATION
Palindromes are words that read the same forwards and backwards. Palindromes can have an
even or odd number of letters. 
In the palindrome where the number of letters is even, you can split the word in half to get two subwords.
You can easily see that second subword taken backwards is the same as the first subword. In the odd 
palindrome, you can also do that, but first, you have to take the middle letter out.
In the first case, you get two IDENTICAL sets of letters, meaning the number of each letter from the 
alphabet in that word is even. In the second case, you also get two identical sets of letters, but 
additionally you get one letter from the middle. That means the number of each letter from the 
alphabet in that word is even, PLUS you get one additional letter, meaning the amount of EXACTLY one of 
the letters from the alphabet in that word is odd.
So if you think about this, you can reorder the word to get the palindrome only if:
1. The number of letters in that word is even, and the amount of each letter from the alphabet in that word is 
even;
2. The number of letters in that word is odd, and the amount of exactly one letter is odd;
*/