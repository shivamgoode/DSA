class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
unordered_set<int> st1;
unordered_set<int> st2;
vector<int>ans;
int n1= nums1.size();
int n2= nums2.size();

for (int i = 0; i < n1; i++) {
    st1.insert(nums1[i]);
}

for (int i = 0; i < n2; i++) {
    if(st1.find(nums2[i]) != st1.end())
    st2.insert(nums2[i]);
}
int i = 0;

for (int x : st2) {
    ans.push_back(x);
    i++;
}
return ans;

    }
};