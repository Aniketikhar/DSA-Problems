vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int size = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 0; i < size - 2; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j < size - 1; j++){
                if(j > i+1 && nums[j] == nums[j-1]) continue;
                for(int k = j+1; k < size; k++){
                    if(k > j+1 && nums[k] == nums[k-1]) continue;
                    if(nums[i] + nums[j] + nums[k] == 0){
                        vector<int> triplet = {nums[i], nums[j], nums[k]};
                        ans.push_back(triplet);
                        break;
                    }
                }
            }
        }

        return ans;

    }