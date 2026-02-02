#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

//! Most optimize way using unordered set

// bool checkDuplicate(vector<int>nums){
//     unordered_set<int>numSet;
//     for(int i = 0; i < nums.size();i++){
//         if(numSet.count(nums[i])){
//             return true;
//         }
//         else{
//             numSet.insert(nums[i]);
//         }
        
//     }
//     return false;
// }

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 3};
//    bool result = checkDuplicate(nums);
//    cout << (result ? "Duplicates found" : "No duplicates") << endl;
    return 0;
}
