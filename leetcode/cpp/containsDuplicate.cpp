#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> numset;

    for (const auto& num : nums) {
        if (numset.count(num)) {
            return true;
        }
        numset.insert(num);
    }

    return false;
}