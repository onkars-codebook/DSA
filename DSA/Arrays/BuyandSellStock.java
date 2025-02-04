public class BuyandSellStock {
    public static int calculateStockPrice(int stocks[]){
        int buyPrice = Integer.MAX_VALUE;   //To calculate the minimum buy Price
        int maxProfit = 0;                 //To calculate the maximum profit 
        int profit;
        for (int i = 0; i < stocks.length; i++) {
            if (buyPrice < stocks[i]) {
                profit = stocks[i] - buyPrice;
                maxProfit = Math.max(maxProfit, profit);  //Calculate maximum profit /
            }else{
                buyPrice = stocks[i];
            }
        }
        return maxProfit;
    }
    public static void main(String[] args) {
        int[] stocks = {7,1,5,3,6,4};
        int price = calculateStockPrice(stocks);
        System.out.println(price);
    }
}
 