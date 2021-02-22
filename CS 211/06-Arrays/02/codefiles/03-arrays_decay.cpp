/*
 * IMPORTANT: This file requires that the third-party library boost is
 * installed on your system if you wish to compile it yourself. The reasoning
 * behind this that boost provides a library that can 'pretty print' a type.
 *
 * The output of this program is:
 * std::__1::array<int, 20ul>
 * std::__1::array<int, 20ul>
 *
 * std::array does not decay when passed to a function. This also means that the
 * 'like a reference' way that C-arrays are passed no longer holds. Pass by
 * value truly sends a copy now.
 */

#include <algorithm>
#include <array>
#include <boost/type_index.hpp>
#include <iostream>

/*
 * Globals
 */
const int SIZE = 20;

/*
 * Functon declarations
 */
void print_array_type(std::array<int, SIZE> arr)
{
    using boost::typeindex::type_id_with_cvr;

    std::cout << type_id_with_cvr<decltype(arr)>().pretty_name() << '\n';
}

void double_elements(std::array<int, SIZE> arr)  // Pass by value, a copy
{
    for (auto& i : arr) {
        i *= 2;
    }
}

int main()
{
    using boost::typeindex::type_id_with_cvr;

    std::array<int, SIZE> arr;
    std::fill(arr.begin(), arr.end(), 2);

    std::cout << type_id_with_cvr<decltype(arr)>().pretty_name() << '\n';
    print_array_type(arr);

    double_elements(arr);
    for (auto i : arr) {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    return 0;
}