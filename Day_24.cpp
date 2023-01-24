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

           
      

//Max Sum Subarray of size K
link  :  https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?fbclid=IwAR2WbNUhe8lWUd0N8mb6A-tk7VmD4HpeIXDyDBt7DMZZM8U54x2INXA-j9w
           
            long ans = 0,sum = 0,i = 0,j = 0;
        while(j<N)
        {
            sum+=Arr[j];
            if(j-i+1 < K)
                j++;
            else if(j-i+1 == K)
            {
               ans = max(ans,sum);
               sum-=Arr[i];
               i++,j++;
            }
        }
        return ans;
