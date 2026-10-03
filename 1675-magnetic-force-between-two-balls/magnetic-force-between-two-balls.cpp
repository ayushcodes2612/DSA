class Solution {
public:
    bool isPossible(vector<int>& position, int mid, int m) {
        int cows = 1, laststall = position[0];
        for (int i = 0; i < position.size(); i++) {
            if (position[i] - laststall >= mid) {
                cows++;
                laststall = position[i];
            }
            if (cows == m)
                return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int st = 1, end = position[position.size() - 1] - position[0];
        int ans = 0;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (isPossible(position, mid, m)) {
                ans = mid;       
                 st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
};