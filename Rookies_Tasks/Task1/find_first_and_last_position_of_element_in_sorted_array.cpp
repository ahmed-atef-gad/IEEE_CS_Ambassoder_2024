class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lft=0;
        int rht=nums.size()-1;
        int start=-1, end=-1;
        bool l=true,r=true;
        while(lft<=rht && (l || r)){
            if(nums[lft]==target && l){
                start=lft;
                l=false;
            }else if(l){
                lft++;
            }
            if(nums[rht]==target && r){
                end=rht;
                r=false;
            }else if(r){
                rht--;
            }
        }
        return {start,end};
    }
};