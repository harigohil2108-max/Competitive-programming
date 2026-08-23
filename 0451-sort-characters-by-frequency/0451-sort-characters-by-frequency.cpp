class Solution {
public:
#include <string>
#include <unordered_map>
#include <vector>
  string frequencySort(string s) {
        unordered_map<char, int> counts;
        for (char c : s) {
            counts[c]++;
        }
        
        // Bucket array where index represents frequency
        // max frequency of any character is s.length()
        vector<vector<char>> buckets(s.length() + 1);
        for (auto& [ch, freq] : counts) {
            buckets[freq].push_back(ch);
        }
        
        // Reconstruct string from highest frequency to lowest
        string result = "";
        for (int freq = s.length(); freq > 0; --freq) {
            for (char ch : buckets[freq]) {
                result.append(freq, ch); // Appends 'ch' 'freq' times
            }
        }
        
        return result;
    }
};
