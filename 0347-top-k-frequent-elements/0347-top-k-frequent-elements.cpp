class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        int n= nums.size();
        vector<int> shape;
        vector<int> ans;
        vector<int> finalans;
        if(k==n){
            return nums;
        }
        for(int i=0; i<n; i++){
            count[nums[i]]++;
        }

        
        vector<pair<int, int>> arr;

        for(auto c : count) {
           arr.push_back({c.second, c.first});
       }

       sort(arr.rbegin(), arr.rend());

      

      for(auto p : arr) {
         ans.push_back(p.second);
     }
            

    for(int i=0; i<k; i++){
        finalans.push_back(ans[i]);
    } 
    return finalans; 
    }
};