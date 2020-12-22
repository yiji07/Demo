/* 
给你一个整数数组 arr，请你帮忙统计数组中每个数的出现次数。

如果每个数的出现次数都是独一无二的，就返回 true；否则返回 false。 */

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        std::map<int, int> count;
        for ( const auto &item : arr) {
            if (count.find(item) == count.end()) {
                count[item] = 1;
            } else {
                count[item]++;
            }
        }
        std::set<int> num;
        for (const auto &item: count) {
            num.insert(item.second);
        }
        if (num.size() != count.size()) {
            return false;
        } else {
            return true;
        }
    }
};