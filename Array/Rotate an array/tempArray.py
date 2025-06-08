class Solution:
    def reverseArray(self, arr, d):

        n = len(arr)
        d = d % n

        if d == 0:
            return arr
        
        temp = [0] * n

        for i in range(n-d):
            temp[i] = arr[d + i]
        
        for i in range(d):

            temp[n-d+i] = arr[i]
        
        return temp
    

solution = Solution()
arr = [1, 2, 3, 4, 5]
d = 2
rotated_array = solution.reverseArray(arr, d)
print("Rotated array:", rotated_array)

