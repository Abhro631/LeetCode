class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        unordered_map<int, int> left_sum;
        unordered_map<int, int> right_sum;
        int res=0;
        for (int k=0;k<nums.size();k++){
            left_sum[k]=res;
            res+=nums[k];
        }
        res=0;
        for (int j=nums.size()-1;j>=0;j--){
            right_sum[j]=res;
            res+=nums[j];
        }
        for (int i=0;i<nums.size();i++){
            if(left_sum[i]==right_sum[i]) return i;
        }
        return -1;
    }
};
Console
