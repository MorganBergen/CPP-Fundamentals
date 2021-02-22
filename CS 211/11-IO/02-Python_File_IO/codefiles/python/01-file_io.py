lines = list()

# There are other ways to open files that are more similar to C++, but this
# method is preferred because once you leave the scope of the with open block,
# the file will be automatically closed
with open("input.txt", mode="r") as f:
    lines = f.readlines()

# The appearance is because print adds a new line by default, and each line read
# from the file already has a new line
for line in lines:
    print(line)

print("\n\n\n")

# This print overrides the default new line by telling it to print nothing at
# the end
for line in lines:
    print(line, end="")
