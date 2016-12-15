class Solution {
public:
    int minMoves(vector<int>& nums) {
    	int sum = 0;
        int  min = *std::min_element(nums.begin(), nums.end()); //get the minimum element of the vector
        nums.erase(std::remove(nums.begin(), nums.end(), min), nums.end()); //remove minimum element from vector
        /*for each remaining element of the vector, calculate the number of decrements it will need to equal the 
        minimum element(min) and add these decrement values of all the elements.
        */
        for(int j=0; j< nums.size(); j++){
        	sum = sum + (nums[j] - min);
        }
    return sum;
    }
};

/*
Following is a link with a straight forward explanation of the problem.
http://codereview.stackexchange.com/questions/148442/finding-the-minimum-number-of-moves-to-achieve-equal-array-elements
*/