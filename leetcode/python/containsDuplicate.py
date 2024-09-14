def containsDuplicate(self, nums) -> bool:
    visited = set()
    for num in nums:
        if num in visited:
            return True
        visited.add(num)
    return False