class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
	
    /* USING TWO POINTERS*/
    while(i<=j){
        
        /*IF YOU FOUND BOTH THE NUMBERS THEN RETURN THEM*/
        if(numbers[i] + numbers[j]==target)
            return {i+1,j+1};
        
        /*IF THE SUM IS GREATER THAN THE TARGET THEN DECREMENT J */
        else if(numbers[i]+numbers[j]>target)
            j--;
        
        
        /*IF THE SUM IS GREATER THAN THE TARGET THEN INCREMENT I */
        else if(numbers[i]+numbers[j]<target)
            i++;
    }
    return {};
        
    }
};
