class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> v;
        if(nums1.size()==0 && nums2.size()==0)
        return double(0); 
        for(auto i:nums1)
        v.push_back(i);
        for(auto i:nums2)
        v.push_back(i);
        sort(v.begin(),v.end());
        int n=v.size();
   
     if(n%2==0)
        {
            double a=(double)((v[n/2]+v[(n-1)/2]));
            return a/2.0;
    
        }
        if(n%2==1)
        return (double) (v[(n-1)/2]);
        return 0.0;
    }
};
