class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX, max=0;
        for (int price:prices){
            if (price<minPrice){
                minPrice=price;
            }else if(price-minPrice>=max){
                max=price-minPrice;
            }
        }
        return max;
    }
};
