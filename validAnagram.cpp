#include <bits/stdc++.h>
using namespace std;
// bool isAnagram(string s, string t){
//     if(s.length()!= t.length())
//     return false;

//     unordered_map<char,int>countS;
//     unordered_map<char,int>countT;

//     for(int i = 0; i <s.length();i++){
//         countS[s[i]]++;
//         countT[t[i]]++;
//     }

//     for(auto it : countS){
//             if (it.second != countT[it.first]) {
//             return false;
//         }


//     }
//     return true;
// }

bool isAnagram(string s, string t){
    unordered_map<char,int>freq;

    if(s.length()!=t.length()){
        return false;
    }

    for(int i = 0; i < s.length();i++){
        freq[s[i]]++;
        freq[t[i]]--;
    }
    for(auto it : freq){
        if(it.second != 0){
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

//! optimize way : with one map TC - 0(n) SC - 0(n)
//?  Valid Anagram check karne ke liye hum dono strings ki length pehle compare karte hain, phir ek hi map me pehli string ke characters ka count increase aur doosri string ke characters ka count decrease karte hain, jisse same characters ek-dusre ko cancel kar dete hain, aur end me agar sabhi characters ka final count zero hota hai to strings anagram hoti hain, warna nahi.

//! brute force 
//? Is approach me hum nested loop lagate hain, matlab pehli string ke har character ke liye doosri string ke saare characters check karte hain.
//? Pehla loop pehli string ke first character se start hota hai, aur us character ko doosri string ke har character se compare karta hai.
//? Agar match mil jaata hai, to hum us matched character ko mark ya remove kar dete hain taaki wo dubara use na ho.
//? Phir pehli string ke next character ke liye wahi process repeat hota hai.
//? Agar end tak pehli string ka har character ko doosri string me ek unique match mil jaata hai, to strings anagram hoti hain, warna nahi.