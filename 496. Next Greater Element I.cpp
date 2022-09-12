class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int,int> m;
        for (int n: nums2) {
            while (!s.empty() && s.top() < n) {
                m[s.top()] = n; s.pop();
            }
            s.push(n);
        }

        vector<int> res;
        for (int n: nums1) {
            if (m.count(n)) res.push_back(m[n]);
            else res.push_back(-1);
        }
        return res;
    }
    
};