#include <array>
#include <functional>  // std::multiplies
#include <iostream>
#include <numeric>  // std::iota, std::accumulate

int main()
{
    std::array<int, 10> arr;

    // std::iota can fill a container with incremented values, and you get to
    // provide the starting value
    std::iota(arr.begin(), arr.end(), 1);
    for (auto i : arr) {
        std::cout << i << " ";
    }
    std::cout << '\n';

    // std::accumulate performs a cumulative operation on every element
    // specified. By default, it is addition. But if a fourth argument is
    // provided, it's possible to use a one-liner to get the mean or variance
    // Getting fancy like that requires knowing about lambdas, a topic typically
    // reserved for 311 or 400.
    // <functional> provides a few basic operations, as seen in the second
    // example
    std::cout << "The sum is: " << std::accumulate(arr.begin(), arr.end(), 0) << '\n';
    std::cout << "The product is: "
              << std::accumulate(arr.begin(), arr.end(), 1, std::multiplies<int>()) << '\n';

    return 0;
}