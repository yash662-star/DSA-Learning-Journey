class Solution {
public:
void a(vector<int>& candidates,int i,int target,vector<vector<int>>&ans,  vector<int>&temp){
    if(target==0){
        ans.push_back(temp);
        return;
    }
for(int j=i;j<candidates.size();j++){
    if(j>i&&candidates[j-1]==candidates[j])continue;
    if(candidates[j]>target)break;
    
   

temp.push_back(candidates[j]);

a(candidates,j+1,target-candidates[j],ans,temp);
temp.pop_back();




}}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>temp;
       a(candidates,0,target,ans,temp);
    return ans;
    }
};