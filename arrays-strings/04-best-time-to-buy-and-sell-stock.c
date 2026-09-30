
#include <stdio.h>

int maxProfit(int* prices, int pricesSize)
{
    if (pricesSize <= 1)
    {
        return 0;
    }

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else
        {
            int profit = prices[i] - minPrice;

            if (profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
}

int main(void)
{
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int size1 = sizeof(prices1) / sizeof(prices1[0]);

    int prices2[] = {7, 6, 4, 3, 1};
    int size2 = sizeof(prices2) / sizeof(prices2[0]);

    int prices3[] = {2, 4, 1};
    int size3 = sizeof(prices3) / sizeof(prices3[0]);

    int prices4[] = {5};
    int size4 = sizeof(prices4) / sizeof(prices4[0]);

    printf("Test 1: %d\n", maxProfit(prices1, size1));
    printf("Test 2: %d\n", maxProfit(prices2, size2));
    printf("Test 3: %d\n", maxProfit(prices3, size3));
    printf("Test 4: %d\n", maxProfit(prices4, size4));

    return 0;
}