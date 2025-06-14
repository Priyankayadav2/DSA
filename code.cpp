#include <iostream>
#include <vector>
#include <algorithm>  // for min and max functions

using namespace std;

int maxProfit(vector<int>& prices) {
    if (prices.empty()) return 0;

    int maxProfit = 0;
    int bestBuy = prices[0];

    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] > bestBuy) {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "MaxProfit: " << maxProfit(prices) << endl;
    return 0; 
}
