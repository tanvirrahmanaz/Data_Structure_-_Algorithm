class Solution:
    def reverseArray(self, arr):
        n = len(arr)
        temp  = [0] * n

        for i in range(n):
            temp[i] = arr[n-i-1]
        
        return temp
        


solution = Solution()

arr = [1, 2, 3, 4, 5]

reversed_array = solution.reverseArray(arr)

print("Reversed array:", reversed_array)