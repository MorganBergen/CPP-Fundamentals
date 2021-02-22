# python has does not have arrays in the same sense as C++. What it does have
# are lists

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(f"Basic list print: {numbers}")  # This is a basic way of printing a list

# This is what a for loop looks like
# In the print() function call, notice the end= part. The name of the parameter
# is end, and I can label my arguments so that it's clear how each argument is
# meant to be used.
for x in numbers:
    # f""" is called a format-string; it is the preferred method of printing;
    # requires python 3.6+
    print(f"{x}", end=" ")
print("\n")


# This one will take a bit to unravel, but once the principles here are
# understood, it will make python incredibly powerful
#
# Like C++, python strings are objects that have member functions
# One of the members is called join
# join() takes as its parameter an 'iterable' (something that can be iterated or
# stepped through)
# The argument list for join starts with '[' because I am creating a list
# The code inside the [] is called a list comprehension. It is a shorthand way
# of building a list. It's a regular for loop where the final statement that
# says what goes into the list is the moved to the front
#
# So, for every item in numbers (a list of ints), I want to create a string,
# and join each element with the string ', '
print(", ".join([str(n) for n in numbers]))

# This achieves the same result as the single line above
stringify = list()
for n in numbers:
    stringify.append(str(n))
print(", ".join(stringify))

# This line doesn't do what we'd expect
otherNumbers = numbers
otherNumbers.append(11)
print(f"numbers: {numbers}\notherNumbers: {otherNumbers}\n")

# The real way to copy a list to another is to slice it
# Index values can be placed on either side of the colon if you just want a
# chunk of the list. Leaving both sides empty denotes the entire list
realOtherNumbers = numbers[:]
print(f"realOtherNumbers: {realOtherNumbers}")
realOtherNumbers.pop()
print(
    f"numbers: {numbers}\notherNumbers: {otherNumbers}\nrealOtherNumbers: {realOtherNumbers}\n"
)

firstHalf = numbers[: -(int(len(numbers) / 2))]
print(f"first half: {firstHalf}\n")

odds = [n for n in numbers if n % 2 != 0]
print(f"Odds: {odds}")
