class Solution:
    def bestHand(self, ranks: List[int], suits: List[str]) -> str:
        if len(set(suits))==1:
            return "Flush";
        c=collections.Counter(ranks)
        x=c.most_common(1)[0]
        if(x[1]>=3):
            return "Three of a Kind"
        elif(x[1]==2):
            return "Pair"
        return "High Card"
