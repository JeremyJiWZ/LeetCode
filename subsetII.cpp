class Solution {
public:
   vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      vector<vector<int>> result={{}};
      sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size();){
         int j;
         int count=0;
         for(j=i;j<nums.size()&&nums[j]==nums[i];j++) count++;
         int lastN=result.size();
         for (int k=0; k<lastN; k++) {
            vector<int> list=result[k];
            for (int m=0; m<count; m++) {
               list.push_back(nums[i]);
               result.push_back(list);
            }
         }
         i=j;
      }
      return result;
   }
};