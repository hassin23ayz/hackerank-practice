// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

// #include <iostream>
#include <stdlib.h>

class Solution {
public:
    int maxProfit(vector<int>& prices) { 

    	int basePrice = prices[0];
    	int buyingPrice = 0;
    	int sellingPrice = 0;
    	for(int i = 1; i <= prices.size()-1; i++)
    	{
    		if(buyingPrice == 0)
    		{
    			// stock has not been bought yet 
	    		if(prices[i] < basePrice) // price has fallen
	    		{
	    			// we buy the stock 
	    			buyingPrice = prices[i];
	    			sellingPrice = buyingPrice;
	    		}
    		}
    		else
    		{
    			// stock has been bought 
    			// now we look at future points to sell the stock at most higher price
    			for(int j=i; j<=(prices.size()-1); j++)
    			{
    				if(prices[j] > sellingPrice){
    					sellingPrice = prices[j];
    				}
    			}
    		}
    	}//for
    	return (sellingPrice - buyingPrice);
    }
};
int main(void)
{

}

