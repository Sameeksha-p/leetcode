class Solution:
    def areSentencesSimilar(self, sentence1: str, sentence2: str) -> bool:
        sen1=sentence1.split();
        sen2=sentence2.split();
        def asimilar(sen1,sen2):
            len1=len(sen1);
            len2=len(sen2);
            if sen1[:len2]==sen2 or sen1[len1-len2:len1]==sen2:
                return True
            for i in range(len2):
                if sen1[i]!=sen2[i]:
                    return sen1[len1 - len2 + i:len1] == sen2[i:]
        if len(sen1)>=len(sen2):
                return asimilar(sen1,sen2);
        else:
                return  asimilar(sen2,sen1);