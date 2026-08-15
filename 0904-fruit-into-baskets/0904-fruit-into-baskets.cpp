class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans =0;
        int low =0;
        int high=0;
        int n =fruits.size();
        unordered_map<int, int> freq;
           while(high<n){
                freq[fruits[high]]++;
                while(freq.size() > 2) {
                freq[fruits[low]]--;

                if(freq[fruits[low]] == 0) {
                    freq.erase(fruits[low]);
                }

                low++;
            }
                ans=max(ans, high-low+1);
            high++;
           }

    return ans;
    }
};