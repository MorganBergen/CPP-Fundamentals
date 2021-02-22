from random import randint
from math import floor


def roll_d6_die():
    """Returns a random number in range [1, 6]. The distribution is uniform"""
    return randint(1, 6)


def print_rolls(rollList):
    """Prints a distrubution of dice rolls"""
    print("Distribution of dice rolls\n==========================")
    for idx, numStars in enumerate(rollList[1:]):
        print(f"{idx + 1}: ", end="")
        for star in range(0, numStars):
            print("*", end="")
        print()


def main():
    TOTAL_ROLLS = 60000
    rollCounter = [0] * 7

    for i in range(0, TOTAL_ROLLS):
        rollCounter[roll_d6_die()] += 1
    for idx, n in enumerate(rollCounter):
        rollCounter[idx] = floor(n / floor(TOTAL_ROLLS / 100))
    print_rolls(rollCounter)


if __name__ == "__main__":
    main()

# To read about this code for main functions:
# https://realpython.com/python-main-function/
