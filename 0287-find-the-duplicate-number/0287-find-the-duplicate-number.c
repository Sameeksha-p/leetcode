int findDuplicate(int* nums, int numsSize) {
    int hash[numsSize];
    for(int i=0;i<numsSize;i++)
        hash[i] = 0;
    for(int i=0;i<numsSize;i++)
        hash[nums[i]]++;
    for(int i=0;i<numsSize;i++){
        if(hash[i] > 1){
            return i;
        }
    }
    return -1;
}