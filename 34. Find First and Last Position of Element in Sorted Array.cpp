class Solution {
public:

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        result.push_back(-1);
        result.push_back(-1);
        int low=0;int high=nums.size()-1;
        while(low<=high){
           int mid=(low+high)/2;
           if(nums[mid]==target){
               result[0]=mid;
               high=mid-1;
           }else if(nums[mid]<target){
               low=mid+1;
           }else{
               high=mid-1;
           }
          
        }
         low=0;high=nums.size()-1;
         while(low<=high){
           int mid=(low+high)/2;
           if(nums[mid]==target){
               result[1]=mid;
               low=mid+1;
           }else if(nums[mid]<target){
               low=mid+1;
           }else{
               high=mid-1;
           }
        }
        return result;
    }
};
