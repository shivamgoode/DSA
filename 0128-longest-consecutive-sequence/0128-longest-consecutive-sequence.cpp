class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
         unordered_set<int> numset;
        for(int i=0; i<nums.size();i++){
            numset.insert(nums[i]);
        }
        int lcq=1;

        for(int num: numset){
            if(numset.count(num-1)){
                continue;
            }
            int currentnum = num;
            int currentlcq=1;
            while(numset.count(currentnum+1)){
                currentnum +=1;
                currentlcq +=1;

            }
            lcq=max(currentlcq, lcq);
            

        }
        return lcq;
        
    }
};