#!/usr/bin/python3
import random
n = random.randint(-10000, 10000)
if n > 10:
    last_digit = n % 10
else:
    last_digit = abs(n) % 10 * -1
if last_digit > 5:
    print("Last digit of", n, "is", last_digit, "and is greater than 5")
elif last_digit == 0:
    print("Last digit of", n, "is", last_digit, "and is 0")
else:
    print("Last digit of", n, "is", last_digit, "and is less than 6 and not 0")
