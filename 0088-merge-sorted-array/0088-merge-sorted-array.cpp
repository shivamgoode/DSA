class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=0;
        int p=0;
        vector<int> arr;
        while(k<m && p<n){
            if(nums1[k]<= nums2[p]){
                arr.push_back(nums1[k]);
                k++;
            }
            else{
                arr.push_back(nums2[p]);
                p++;

            }

        }
        while(k<m){
            arr.push_back(nums1[k]);
                k++;

        }
        while(p<n){
            arr.push_back(nums2[p]);
                p++;

        }
       
        for(int l=0; l< m+n; l++){
            nums1[l]=arr[l];

        }
        
      
    }
};