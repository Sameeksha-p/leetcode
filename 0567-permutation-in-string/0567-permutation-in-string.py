class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
    
        if s1 == s2:
            return True
        s1 = sorted(s1)
        # Correct loop to check the full range of valid substrings
        for i in range(len(s2) - len(s1) + 1):
            s3 = s2[i:i + len(s1)]
            if sorted(s3) == s1:
                return True
        return False
    