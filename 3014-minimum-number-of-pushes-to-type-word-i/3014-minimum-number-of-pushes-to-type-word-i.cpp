class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int pushes = 0;
        int cost = 1;

        while (n > 0) {
            int take = min(8, n);
            pushes += take * cost;
            n -= take;
            cost++;
        }

        return pushes;
    }
};