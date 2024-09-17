class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        list1=s1.split();
        list2=s2.split();
        res=[];
        for i in list1:
            if i not in list2 and list1.count(i)==1:
                res.append(i);
        for x in list2:
            if x not in list1 and list2.count(x)==1:
                res.append(x);
        
        return res;
        