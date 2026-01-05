#include <stdio.h>
#include <assert.h>
#include "../include/max_profit.h"

void testNormalCases() {
    int prices1[] = {7, 1, 5, 3, 6, 4};
    assert(maxProfit(prices1, 6) == 5);

    int prices2[] = {1, 2, 3, 4, 5};
    assert(maxProfit(prices2, 5) == 4);
}

void testEdgeCases() {
    int prices1[] = {};
    assert(maxProfit(prices1, 0) == 0);

    int prices2[] = {5};
    assert(maxProfit(prices2, 1) == 0);

    int prices3[] = {5, 5, 5, 5};
    assert(maxProfit(prices3, 4) == 0);
}

int main() {
    testNormalCases();
    testEdgeCases();
    printf("All tests passed!\n");
    return 0;
}
