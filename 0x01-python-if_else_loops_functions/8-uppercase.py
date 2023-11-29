#!/usr/bin/env python3
def uppercase(str):
    for c in str:
        print(f"{chr(ord(c) - 32)}", end="")
    print()
