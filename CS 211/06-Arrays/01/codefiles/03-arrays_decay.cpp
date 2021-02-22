/*
 * IMPORTANT: This file requires that the third-party library boost is
 * installed on your system if you wish to compile it yourself. The reasoning
 * behind this is that boost provides a library that can 'pretty print' a type.
 *
 * The output of this program is:
 * int [20]
 * int*
 *
 * This is because when the array is passed to the function, it 'decays' into a
 * pointer to the first element. This is why when an array is passed to a
 * function, it is best practice to pass the size along as well. I did not in
 * this program because I was not interested in the elements of the array.
 */

#include <boost/type_index.hpp>
#include <iostream>

void print_array_type(int arr[])
{
    using boost::typeindex::type_id_with_cvr;

    std::cout << type_id_with_cvr<decltype(arr)>().pretty_name() << '\n';
}

int main()
{
    using boost::typeindex::type_id_with_cvr;

    int arr[20] = { 0 };
    std::cout << type_id_with_cvr<decltype(arr)>().pretty_name() << '\n';
    print_array_type(arr);

    return 0;
}