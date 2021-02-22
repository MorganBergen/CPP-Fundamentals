#include <algorithm>  // std::copy, std::fill, std::reverse, std::sort, std::generate_n
#include <array>
#include <functional>  // std::greater
#include <iostream>
#include <iterator>  // std::back_inserter
#include <random>

void print(const std::vector<int>& vec)
{
    for (const auto& i : vec) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}

void print(const std::array<int, 10>& vec)
{
    for (const auto& i : vec) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}

int main()
{
    // Creates an array with capacity and size of 10, also initializes every
    // element, in this case to zero
    std::array<int, 10> first = {0};
    std::vector<int>    second;
    std::fill(first.begin(), first.end(), 42);  // Every element is now 42

    print(first);

    // Note types of first and second
    // std::back_inserter allows us to add elements to the vector without having
    // to resize it first
    std::copy(first.begin(), first.end(), std::back_inserter(second));
    print(second);

    std::vector<int> third(10);
    std::iota(third.begin(), third.end(), 1);
    print(third);

    std::reverse(third.begin(), third.end());  // the most straightforward of the bunch
    print(third);

    std::vector<int>                   fourth;
    std::mt19937                       prng(std::random_device{}());
    std::uniform_int_distribution<int> dist(1, 1000);
    for (int i = 0; i < 10; ++i) {
        fourth.push_back(dist(prng));
    }
    // std::generate_n(std::back_inserter(fourth), 10, [&dist, &prng]() { return dist(prng); });
    print(fourth);

    std::sort(fourth.begin(), fourth.end());  // Sorts by default from small to large (ascending)
    print(fourth);

    std::sort(fourth.begin(), fourth.end(), std::greater<int>());  // Can provide your own sort
    print(fourth);

    return 0;
}