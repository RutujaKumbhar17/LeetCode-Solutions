class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        def product(n):
            l = [int(i) for i in str(n)]
            s = 1
            for i in l:
                s = s*i
            print(s, l)
            
            return s
        
        for i in range(n, n+11):
            l = []
            p = product(i)
            print(p)
            if p%t==0:
                return i

        # product(n)