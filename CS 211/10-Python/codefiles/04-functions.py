def accumulate(iterable):
    sum = 0
    for n in iterable:
        sum += n
    return sum


numbers = list(range(1, 11))
print(accumulate(numbers))
