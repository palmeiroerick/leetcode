# 1304. Find N Unique Integers Sum up to Zero

# S = [0] ∗ (n mod 2) + [i, −i | i = 1 ... ⌊n/2⌋]

class Solution:
    def sumZero(self, n: int) -> list[int]:
        s: list[int] = [0] * (n % 2) # If n is odd s = [0], if n is even s = []

        for i in range(1, n // 2 + 1):
            s.extend([i, -i])

        return s
