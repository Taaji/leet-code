class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    	int count_deleted = 0;
    	for(int i=0; i< nums.size(); i++){
    		if(nums[i] == 0){
    			nums.erase(nums.begin() + i);
    			count_deleted++;
    			i = i-1; //important to reset position after deleting a 0 from vector. check test case [0, 0, 1].
    		}
    		else
    			continue;
    	}
    	
    	for(int k = 1;  k <= count_deleted ; k++){
    		nums.push_back(0);
    	}
    }
};
