#pragma once

#include <vector>

using namespace std;

// an brute force knapsack algorithm
class bf_knapsackT {
public:
    int solve_knapsack(const vector<int>& profits, const vector<int>& weights, int capacity)
    {
        return this->knapsack_recur(profits, weights, capacity, 0);
    }
private:
    int knapsack_recur(const vector<int>& profits, const vector<int>& weights, int capacity, std::size_t current_index)
    {
        // base checks
        if (capacity <= 0 || current_index >= profits.size()) {
            return 0;
        }

        // recursive call after inculding the element at the current_index
        // if the weight of the element at the current_index exceeds the capacity,
        // then we shouldn't process this
        int profits_1 = 0;
        if (weights[current_index] <= capacity) {
            profits_1 = profits[current_index] +
                knapsack_recur(profits, weights, capacity - weights[current_index], current_index + 1);
        }

        // recursive call after exculding the element at the current_index
        int profits_2 = knapsack_recur(profits, weights, capacity, current_index + 1);
        // above equivalent to saying had zero profits
        // int profits_2 = 0 + knapsack_recur(profits, weights, capacity, current_index + 1);

        // return the maximum of the two cases
        // 1: Nth item included
        // 2: Nth item not included
        return max(profits_1, profits_2);
    }
};