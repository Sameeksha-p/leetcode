int longestSubarray(int* nums, int numsSize) {
    
    int maxval=0;
    int currentlen=0;
    int maxlen=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>maxval){
            maxval=nums[i];
        }
    }
    for(int i=0;i<numsSize;i++){
        if(nums[i]==maxval){
            currentlen++;
            if(currentlen>maxlen){
                maxlen=currentlen;
            }
        }
            else{
               currentlen=0; 
            }
        
    }
    return maxlen;
    
}