/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* xorQueries(int* arr, int arrSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
     *returnSize = queriesSize;
   int* result=(int*)malloc(queriesSize*sizeof(int));
    for(int i=0;i<queriesSize;i++){
        int xorsum=0;
        int left=queries[i][0];
        int right=queries[i][1];

    for(int j=left;j<=right;j++){
        xorsum=xorsum^arr[j];
       
    }
         result[i]=xorsum;
        }
    return result;
    
    
}