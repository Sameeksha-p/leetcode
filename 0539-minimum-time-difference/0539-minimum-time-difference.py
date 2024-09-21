class Solution:
    def findMinDifference(self, timePoints: List[str]) -> int:
        times=[];
        for time in timePoints:
            h,m=time.split(":");
            times.append(int(h)*60+int(m));
        times.sort();    
        ans=24*60-times[-1]+times[0];
        for i in range (1,len(times)):
            dist=times[i]-times[i-1];
            ans=min(dist,ans);
        return ans;
            