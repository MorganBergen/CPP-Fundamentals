# https://docs.python.org/3.6/library/string.html#format-specification-mini-language

# format_spec     ::=  [[fill]align][sign][#][0][width][grouping_option][.precision][type]
# fill            ::=  <any character>
# align           ::=  "<" | ">" | "=" | "^"
# sign            ::=  "+" | "-" | " "
# width           ::=  digit+
# grouping_option ::=  "_" | ","
# precision       ::=  digit+
# type            ::=  "b" | "c" | "d" | "e" | "E" | "f" | "F" | "g" | "G" | "n" | "o" | "s" | "x" | "X" | "%"

pi = 3.1415926
answer = 42

# Normal printing, no surprises here
print(f"life universe and everything: {answer}")

# The colon indicates that we want to use this mini-language documented above
# the only option we are setting is type, in this case binary
print(f"life universe and everything: {answer:b}")

# The # activates the "alternate form" of my type x, which is hexadecimal
# The alternate form in case prepends 0x to the number. It is common to always
# print 0x before a hex value
print(f"life universe and everything: {answer:#x}")

# Typically, if we want to print binary, we actually want to print a set amount
# of bits (usually some power of 2, minimum of 8(8 bits == 1 byte))
# This print is using the 0, width, and type, respectively
#
# The 0 field is particular to numbers. From the linked web site:
# When no explicit alignment is given, preceding the width field by a zero ('0')
# character enables sign-aware zero-padding for numeric types. This is
# equivalent to a fill character of '0' with an alignment type of '='.
#
# No alignment is provided (no <, ^, or >)
# Alignment type = places padding after the sign, if any, and before digits
# See the two prints after this one to see the difference
print(f"life universe and everything: {answer:08b}")
print(f"string padding: {str(-42):0>4}")
print(f"numper padding: {-42:04}")

# This uses the precision and type fields
print(f"pi: {pi:.2f}")


# zip() allows us to iterate through multiple iterables at the same time
# It stops as soon as the shortest iterable is exhausted
#
# In this code, two iterables are being stepped through
#   a string '<^>' and a list of strings ['left', 'center', 'right']
# They are the variables align and text, respectively, in the for loop
# The print statement looks crazier than it is
# It will print each text item, and format it
# The formatting sets the fill character to each of <, ^, and > and aligns
# using the same symbol with a width of 16
for align, text in zip("<^>", ["left", "center", "right"]):
    print(f"{text:{align}{align}16}")
