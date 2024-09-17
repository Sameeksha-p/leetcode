class Solution:
    def firstUniqChar(self, s: str) -> int:
        frequency={};
        for char in s:
            if char in frequency :
                frequency[char]+=1;
            else:
                frequency[char]=1;
        for index,char in enumerate(s):
            if frequency[char]==1:
                return index
        return -1;