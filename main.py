class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minPrice=prices[0]
        maxProfit=0
        for i in prices:
            profit=i-minPrice
            if i<minPrice:
                minPrice=i
            elif profit>maxProfit:
                maxProfit=profit
        return maxProfit
