// 1. Two Sum
//Link :  https://leetcode.com/problems/two-sum/?fbclid=IwAR2z4q7JRz0pPQttKhJqbvmL3PhaeDKG1zoKczILyAfzQaxkjUeSkQHKfBY


//solution
static bool cmp(pair<int,int> a,pair<int,int> b){
       return a.first<b.first;
   }
    vector<int> twoSum(vector<int>& nums, int target) {
        // nums.sort(nums.begin(),nums.end());
        vector<pair<int,int>> v(nums.size());
        for(int i=0;i<nums.size();i++){
            v[i]={nums[i],i};
        }
        sort(v.begin(),v.end(),cmp); 
        vector<int> s;
        int l = 0;
         int r = nums.size()-1;
        vector<int> ans;
        for(int i =0; i<nums.size();i++)
        {
            if(v[l].first+v[r].first==target)
            {
                ans.push_back(v[l].second);
                ans.push_back(v[r].second);
                break;
            }
            else if(v[l].first+v[r].first>target)
                r--;
             else
                l++;


        }
        return ans;
