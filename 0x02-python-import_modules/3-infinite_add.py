#!/usr/bin/python3
import sys

if __name__ == "__main__":
    argv = sys.argv[1:]
    n = len(argv)
    sum = 0
    for i in range(n):
        sum += int(argv[i])
    print(sum)
