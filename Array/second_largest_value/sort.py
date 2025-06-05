class Solution:
    def getSecondLargest(self, arr):
        # arr-এর দৈর্ঘ্য বের করা
        arrlen = len(arr)
        
        # arr-কে ছোট থেকে বড়ভাবে সাজানো
        arr.sort()
        
        # পিছন থেকে শুরু করে প্রথম যে মানটি largest থেকে আলাদা তা খুঁজে বের করা
        
        for i in range(arrlen - 2, -1, -1):  # arrlen-2 থেকে শুরু হবে, কারণ arr[arrlen-1] হলো সর্বোচ্চ মান
            if arr[i] != arr[arrlen - 1]:  # যদি arr[i] সর্বোচ্চ মানের সমান না হয়
                return arr[i]  # return করবে দ্বিতীয় সর্বোচ্চ মান
        
        # যদি দ্বিতীয় সর্বোচ্চ মান না পাওয়া যায়, তাহলে -1 ফেরত দেওয়া হবে
        return -1

# কোডটিকে পরীক্ষা করার জন্য একটি উদাহরণ:
solution = Solution()

# উদাহরণ অ্যারে
arr = [10, 20, 4, 6, 20, 4]

# getSecondLargest ফাংশন কল করা
second_largest = solution.getSecondLargest(arr)

# ফলাফল প্রিন্ট করা
print("Second Largest:", second_largest)
