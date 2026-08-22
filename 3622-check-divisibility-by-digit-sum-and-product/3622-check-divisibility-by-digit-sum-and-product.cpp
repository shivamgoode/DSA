class Solution {
public:
    bool checkDivisibility(int n) {

        string str = to_string(n);
        int size= str.length();
        int ans;
        int sum=0;
        int product=1;
        for(int i = 0; i < size; i++) {
            sum += (str[i] - '0');
            product *= (str[i] - '0');
        }
        ans= sum + product;

        if(n % ans == 0){
            return true;

        }
        else{
            return false;
        }
        
    }
};