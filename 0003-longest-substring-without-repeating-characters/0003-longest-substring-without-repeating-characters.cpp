class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int l=s.length();
        int left=0;
        int right=0;

        int ans=0;
        unordered_map<char, int> freq;
        while(right<l){
            freq[s[right]]++;
            while(freq[s[right]]>=2){
                freq[s[left]]--;
                left++;
            }
            ans= max(ans, right-left+1);


         right++;
        }


        return ans;
    }
};