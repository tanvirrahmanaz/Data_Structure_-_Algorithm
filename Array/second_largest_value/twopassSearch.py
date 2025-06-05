class Solution:
    def getSecondLargest(self, arr):
        arrlen = len(arr)

        largest_value  = -1
        second_largest_value = -1

        for i in range(arrlen):
            if arr[i] > largest_value:
                largest_value = arr[i]
        
        for i in range(arrlen):
            if arr[i] > second_largest_value and arr[i] < largest_value:
                second_largest_value = arr[i]
        
        return second_largest_value  
solution = Solution()

# উদাহরণ অ্যারে
arr = [10, 20, 4, 6, 20, 4]

# getSecondLargest ফাংশন কল করা
second_largest = solution.getSecondLargest(arr)

# ফলাফল প্রিন্ট করা
print("Second Largest:", second_largest)
