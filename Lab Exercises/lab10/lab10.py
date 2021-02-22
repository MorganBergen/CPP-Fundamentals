# Morgan Bergen
# B493R546
# Lab10
# Your script will only contain 2 lines.
# Line 1 will create a list of multiples of 7 in the range [7, 350]
# Line 2 will print the list, comma separated.
# 2 points are possible for this lab.
# Hints:
# Line 1 can be achieved with a list comprehension
# Line 2 is a bit trickier.
# print() can take many arguments to be printed, but we only have one list.
# Placing * in front of a list will break it up so that each element is an individual argument.
# We can then change the default value of the sep argument to print.
# sep is the separator.

list = [ i for i in range(7, 351) if i % 7 == 0 ]

print(*list, sep = ", ")
