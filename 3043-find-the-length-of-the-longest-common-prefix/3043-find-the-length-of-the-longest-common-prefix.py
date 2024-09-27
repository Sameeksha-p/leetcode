class Solution:
    def longestCommonPrefix(self, arr1: List[int], arr2: List[int]) -> int:
        s=set()
        for e in arr1:
            while  e:
                s.add(e)
                e//=10
        ans=0
        for e in arr2:
            while e:
                if e in s:
                    ans=max(ans,len(str(e)))
                e//=10
        return ans
                