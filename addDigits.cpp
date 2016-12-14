class Solution {
public:
	
    int addDigits(int num) {
        int sum = 0;
    	int digit, rem, newnum;
    
    	if(num / 10 == 0)
    	    return num % 10;
    		
        while((num / 10)!=0){
        	digit = num % 10;
        	rem = num / 10;
        	sum = sum + digit;
        	num = rem;
        }
        sum = sum + rem;
        newnum = sum;
        cout << newnum;
        
        if(newnum == 10)
            return 1;
        
        while(newnum / 10 != 0){
           newnum = addDigits(newnum);
        }
        return newnum;
    }
};
