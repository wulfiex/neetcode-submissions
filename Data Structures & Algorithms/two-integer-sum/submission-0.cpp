class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> complement;
        for(int i=0;i<nums.size();i++){
            auto it= complement.find(target-nums[i]);
            if(it!=complement.end()){
                return {it->second,i};
            }else{
                complement[nums[i]]=i;
            }
        }
        return {};
    }
};
