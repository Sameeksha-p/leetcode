class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        def comparenums(x,y):
            str_x=str(x)+str(y)
            str_y=str(y)+str(x)
            return (str_x>str_y)-(str_x<str_y)
        nums.sort(key=cmp_to_key(comparenums),reverse=True)
        if nums[0]==0:
            return '0'
        result=''
        for num in nums:
            result+=str(num)
        return result
        