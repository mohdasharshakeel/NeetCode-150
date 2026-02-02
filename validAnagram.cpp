#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t){
    if(s.length()!= t.length())
    return false;

    unordered_map<char,int>countS;
    unordered_map<char,int>countT;

    for(int i = 0; i <s.length();i++){
        countS[s[i]]++;
        countT[t[i]]++;
    }

    for(auto it : countS){
            if (it.second != countT[it.first]) {
            return false;
        }


    }
    return true;
}

int main(){

    string s = "anagram";
    string t = "nagaram";

    if (isAnagram(s, t)) {
        cout << "Yes, it is a valid anagram" << endl;
    } else {
        cout << "No, it is not an anagram" << endl;
    }
    return 0;
}