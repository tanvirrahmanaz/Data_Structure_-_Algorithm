class Solution:
    def nextPermutation(self, nums):
        n = len(arr)
        
        if n <=1:
            return
        
        pivot_idx = -1
        
        for i in range(n-2, -1 ,-1):
            
            if arr[i] < arr[i+1]:
                pivot_idx = i
                break
        
        if pivot_idx == -1:
            arr.reverse()
            return
        
        for j in range(n-1, pivot_idx , -1):
            if arr[j] > arr[pivot_idx]:
                
                arr[pivot_idx], arr[j] = arr[j] , arr[pivot_idx]
                break
        
        arr[pivot_idx + 1 : ] = reversed(arr[pivot_idx+1 : ])
        
        return arr
        


solution = Solution()
arr = [1,2,3,6,5]
solution.nextPermutation(arr)
print("Next permutation:", arr)