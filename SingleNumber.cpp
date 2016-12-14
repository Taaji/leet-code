int singleNumber(int* nums, int numsSize) {

    int j,k;

    

    for(j = 1; j < numsSize; j++){

        for(k = 0; k < numsSize - 1; k++){

            if(nums[k] > nums[k+1]){

                int temp;

                temp = nums[k];

                nums[k] = nums[k+1];

                nums[k+1] = temp;

            }

        }

    }

    

    int r;

	for(r = 0; r < numsSize; r+=2){

		if(nums[r] == nums[r+1]){

			continue;

		}

		else{

			break;

		}

	} return nums[r];

}
