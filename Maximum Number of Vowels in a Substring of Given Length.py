class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        l = r = res = w = 0
        for r in range(k):
            if s[r] in 'aeiou':
                w += 1
                res = w
        for r in range(k, len(s)):
            if s[r] in 'aeiou':
                w += 1
            if s[l] in 'aeiou':
                w -= 1
            l += 1
            res = max(w, res)
        return res
            