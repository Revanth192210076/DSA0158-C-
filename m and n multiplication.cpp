class Solution:
    def findKthNumber(self, m, n, k):
        res = []
        for i in range(1, m+1):
            for j in range(1, n+1):
                res.append(i*j)
        res.sort()
        return res[k-1]



m, n = 3, 3
k = 5
res = Solution()
print(res.findKthNumber(m, n, k))

