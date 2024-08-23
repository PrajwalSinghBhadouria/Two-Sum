class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        map<int,int> mp;
        int ans;
        for(int i=0; i<nums.size(); i++){
            ans = target - nums[i];
            if(mp.find(ans)==mp.end()){
                mp[nums[i]]=i;
            }
            else{
                v.push_back(i);
                break;
            }
        }
        for(auto j:mp){
            if(ans == j.first){
                v.push_back(j.second);
            }
        }
        return v;
    }
};
