class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int n=str.length();
        int left=0;
        int right= n-1;
        while(left<right){
            if(str[left]!=str[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;

        
    }
};