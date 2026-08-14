class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<char> arr;
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            int count = 0;

            
            for (int j = 0; j < arr.size(); j++) {
                if (arr[j] == s[i]) {
                    count++;
                }
            }

           
            if (count == 2) {
                for (int j = 0; j < arr.size(); j++) {
                    if (arr[j] == s[i]) {
                        arr.erase(arr.begin(), arr.begin() + j + 1);
                        break;
                    }
                }
            }

            arr.push_back(s[i]);

            ans = max(ans, (int)arr.size());
        }

        return ans;
    }
};