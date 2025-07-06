class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int h=1;
        int l=0;
        while(h>=l&&h<nums.size()){
            if(nums[h]!=nums[l]){
                 l++;
                nums[l]=nums[h];
                
                
               
            }h++;
        }
       return l+1; 
    }
};