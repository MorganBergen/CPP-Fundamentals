import sys

# From here on out, at least Python 3.6 is required
# Only this file will run a check

# variables are just declared, the () indicates that this is a tuple
MIN_PYTHON = (
    3,
    6,
)
# Note the syntax; indentation is part of the language
if sys.version_info < MIN_PYTHON:
    sys.exit("Requires Python >= %s.%s" % MIN_PYTHON)

# you don't have to specify types; python will know that this is an int
x = 5
print(x / 2)

# python has strings, single or double quotes doesn't matter
# Pick one and be consistent; only use the other when your chosen one is needed
# inside the string
name = "Adam Sweeney"
sameName = "adam sweeney"
print(sameName.title())  # Title case is a handy string function

sentence = "It's mine"  # The apostrophe is part of the string
otherSentence = 'A "light" snack'  # double quotes are part of the string
print(f"{sentence}\n{otherSentence}")
