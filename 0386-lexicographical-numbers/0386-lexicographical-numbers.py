class Solution:
    def lexicalOrder(self, n: int) -> List[int]:
        str_num=[];
        for i in range(1,n+1):
            str_num.append(str(i));
        str_num.sort();
        for j in range(len(str_num)):
            str_num[j]=int(str_num[j]);
        return str_num;