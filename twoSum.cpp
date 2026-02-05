// #include <bits/stdc++.h>
// using namespace std;

// vector<int> checkSum(vector<int> nums, int target) {
//     unordered_map<int, int> preMap;

//     for (int i = 0; i < nums.size(); i++) {
//         int diff = target - nums[i];

//         if (preMap.find(diff) != preMap.end()) {
//             return {preMap[diff], i}; // 2 indexes
//         }
//         preMap[nums[i]] = i;
//     }
//     return {}; // empty vector if not found
// }

// int main() {
//     vector<int> nums{1, 2, 3, 4, 5};
//     int target = 9;

//     vector<int> ans = checkSum(nums, target);

//     if (!ans.empty()) {
//         cout << ans[0] << " " << ans[1] << endl;
//     } else {
//         cout << "No pair found" << endl;
//     }
// }


 #include <bits/stdc++.h>
 using namespace std;
vector<int> checkSum(vector<int>nums,int target){
    unordered_map<int,int>preVal;

    for(int i = 0; i <nums.size();i++){
        int diff = target - nums[i];
        if(preVal.find(diff)!= preVal.end()){
            return {preVal[diff],i};
        }
        preVal[nums[i]] = i;
    }

    return {};

}
 int main(){
    vector<int>nums{1,2,3,4,5,6,7};
    int target = 12;
   vector<int>ans = checkSum(nums,target);
   if(!ans.empty()){
       cout << " pair found at " << ans[0] << " " << ans[1] <<endl;
   }else{
    cout << " not found" << endl;
   }



    return 0;
 }
