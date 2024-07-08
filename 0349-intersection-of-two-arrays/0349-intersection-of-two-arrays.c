/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    // Allocate a result array with the minimum possible size
    int* result = (int*)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    int resultCount = 0;

    // Use a hash set to store elements of nums1
    int hashTable[1001] = {0}; // Assuming the numbers are in the range [0, 1000]
    for (int i = 0; i < nums1Size; i++) {
        hashTable[nums1[i]] = 1;
    }

    // Check elements of nums2 against the hash set
    for (int i = 0; i < nums2Size; i++) {
        if (hashTable[nums2[i]] == 1) {
            result[resultCount++] = nums2[i];
            hashTable[nums2[i]] = 0; // Remove to avoid duplicates
        }
    }

    // Set the return size
    *returnSize = resultCount;
    return result;
}