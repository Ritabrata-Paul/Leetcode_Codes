class Solution {
public:
    int largestPerimeter(vector<int>&m_edges) {
        {
        sort(m_edges.begin(), m_edges.end(), [](int left, int right){return left >= right;});
        
        for(int i = 0; i + 2 < m_edges.size(); i++)
        {
            if(m_edges[i] < m_edges[i+1] + m_edges[i+2])
                return m_edges[i] + m_edges[i+1] + m_edges[i+2];
        }
        
        return 0;
    }
    }
};