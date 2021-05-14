// knapsack.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// https://www.educative.io/courses/grokking-dynamic-programming-patterns-for-coding-interviews/RM1BDv71V60


using namespace std;

#include <iostream>
#include <vector>

#include "brute_force_recursive.h"

void run_brute_force_knapsack(void)
{
    cout << "-----------------------------------\n";
    cout << "   brute-force knapsack problem!\n";
    cout << "-----------------------------------\n";
    cout << "profits = { 1, 6, 10, 16 }\n";
    cout << "weights = { 1, 2, 3, 5 }\n";

    bf_knapsackT ks;
    vector<int> profits = { 1, 6, 10, 16 };
    vector<int> weights = { 1, 2, 3, 5 };

    int max_profit{};
    max_profit = ks.solve_knapsack(profits, weights, 7);
    cout << "Total knapsack profit (capacity 7) ---> " << max_profit << endl;
    max_profit = ks.solve_knapsack(profits, weights, 6);
    cout << "Total knapsack profit (capacity 6) ---> " << max_profit << endl;
}

void run_brute_force_knapsack_2(void)
{
    cout << "-----------------------------------\n";
    cout << "   brute-force knapsack problem again!\n";
    cout << "-----------------------------------\n";
    cout << "profits = { 60, 100, 120 }\n";
    cout << "weights = { 10, 20, 30 }\n";

    bf_knapsackT ks;
    vector<int> profits = { 60, 100, 120 };
    vector<int> weights = { 10, 20, 30 };

    int max_profit{};
    max_profit = ks.solve_knapsack(profits, weights, 7);
    cout << "Total knapsack profit (capacity 7) ---> " << max_profit << endl;
    max_profit = ks.solve_knapsack(profits, weights, 6);
    cout << "Total knapsack profit (capacity 6) ---> " << max_profit << endl;
}

#include "optimized_dynamic_recursive.h"

void run_optimized_dynamic_recursive(void)
{
    cout << "-----------------------------------------\n";
    cout << "   optimized_dynamic knapsack problem!\n";
    cout << "-----------------------------------------\n";
    cout << "profits = { 1, 6, 10, 16 }\n";
    cout << "weights = { 1, 2, 3, 5 }\n";

    od_knapsackT ks;
    vector<int> profits = { 1, 6, 10, 16 };
    vector<int> weights = { 1, 2, 3, 5 };

    int max_profit{};
    max_profit = ks.solve_knapsack(profits, weights, 7);
    cout << "Total knapsack profit (capacity 7) ---> " << max_profit << endl;
    max_profit = ks.solve_knapsack(profits, weights, 6);
    cout << "Total knapsack profit (capacity 6) ---> " << max_profit << endl;
}

void run_optimized_dynamic_recursive_2(void)
{
    cout << "-----------------------------------------\n";
    cout << "   optimized_dynamic knapsack problem!\n";
    cout << "-----------------------------------------\n";
    cout << "profits = { 60, 100, 120 }\n";
    cout << "weights = { 10, 20, 30 }\n";

    od_knapsackT ks;
    vector<int> profits = { 60, 100, 120 };
    vector<int> weights = { 10, 20, 30 };

    int max_profit{};
    max_profit = ks.solve_knapsack(profits, weights, 3);
    cout << "Total knapsack profit (capacity 3) ---> " << max_profit << endl;
    //max_profit = ks.solve_knapsack(profits, weights, 6);
    //cout << "Total knapsack profit (capacity 6) ---> " << max_profit << endl;
}

int main()
{
    run_brute_force_knapsack();
    run_optimized_dynamic_recursive();

    run_brute_force_knapsack_2();
    run_optimized_dynamic_recursive_2();

    cin.get();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
