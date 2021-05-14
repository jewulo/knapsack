#pragma once

#include <vector>

using namespace std;

// an optimisated knapsack algorithm using memoization
class od_knapsackT {
public:
	int solve_knapsack(const vector<int> &profits, const vector<int> &weights, int capacity)
	{
		// create a table to store current solution, initialised with -1
		vector<vector<int>> dp(profits.size(), vector<int>(capacity + 1, -1));
		return this->knapsack_recur(dp, profits, weights, capacity, 0);
	}
private:
	int knapsack_recur(vector<vector<int>> &dp, const vector<int> &profits,
					   const vector<int> &weights, int capacity, int current_index)
	{
		// base checks
		if (capacity <= 0 || current_index >= static_cast<int>(profits.size())) {
			return 0;
		}

		// if we have already solved a similar problem, return the result from memory
		if (dp[current_index][capacity] != -1) {
			return dp[current_index][capacity];
		}

		// recursive call after choosing elemnt at the current_index
		// if weight of the elemnt at the current_index exceeds capacity
		// we shouldn't process this
		int profit1 = 0;
		if (weights[current_index] <= capacity) {
			profit1 = profits[current_index] +
				knapsack_recur(dp, profits, weights, capacity - weights[current_index],	current_index + 1);
		}

		// recursive call after excluding the element at the current_index
		int profit2 = knapsack_recur(dp, profits, weights, capacity, current_index + 1);
		dp[current_index][capacity] = max(profit1, profit2);
		return dp[current_index][capacity];
	}
};