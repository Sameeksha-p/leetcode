int maxSubarraySumCircular(int* nums, int numsSize){
    short sNumsSize = numsSize;
    int nTotal = 0, nMax = INT_MIN, nMaxTmp = 0, nMin = INT_MAX, nMinTmp = 0;
    while(numsSize-- > 0)
    {
        nTotal += *nums;

        // check max
        if(nMaxTmp > 0)
        {
            nMaxTmp += *nums;
        }
        else
        {
            nMaxTmp = *nums;
        }
        if(nMaxTmp > nMax) nMax = nMaxTmp;

        // check min
        if(nMinTmp < 0)
        {
            nMinTmp += *nums;
        }
        else
        {
            nMinTmp = *nums;
        }
        if(nMinTmp < nMin) nMin = nMinTmp;
        nums++;
    }
    nTotal -= nMin;

    return nMax < 0? nMax: (nTotal > nMax? nTotal: nMax);
}