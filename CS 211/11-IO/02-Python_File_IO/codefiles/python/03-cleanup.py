def make_neat(lines: list, precision: int, width: int):
    """Takes the lines read from a file where each line is two numbers, and
    prints it in a neat format"""
    with open("clean.dat", mode="w") as f:
        i = 1
        for line in lines:
            vals = line.split()
            for value in vals:
                f.write(f"{i:.<4}{float(value):.>+{width}.{precision}f}\n")
                i += 1


with open("raw.dat", mode="r") as f:
    lines = f.readlines()

make_neat(lines, 5, 20)
