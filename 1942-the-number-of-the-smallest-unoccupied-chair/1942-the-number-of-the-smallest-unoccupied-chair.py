class Solution:
    def smallestChair(self, times: List[List[int]], targetFriend: int) -> int:
        target_time=times[targetFriend]
        times.sort()
        n=len(times)
        char_time=[0]*n
        for time in times:
            for i in range(n):
                if char_time[i] <= time[0]:
                    char_time[i]=time[1]
                    if time==target_time:
                        return i
                    break
        return 0
                