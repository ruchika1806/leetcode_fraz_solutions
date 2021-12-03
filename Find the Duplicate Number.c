//Find the Duplicate Number : LEETCODE-287

//T.C : O(n)
//S.C : O(1)


int findDuplicate(int* nums, int numsSize){
    int slow=nums[0];
    int fast=nums[0];
    do{
        slow=nums[slow];
        fast=nums[nums[fast]];
    }while(slow!=fast);
    fast=nums[0];
    while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
    }
    return slow;
    
}