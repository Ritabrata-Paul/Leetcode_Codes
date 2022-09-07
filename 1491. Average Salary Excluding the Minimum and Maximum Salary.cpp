class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        double minimum = DBL_MAX;
        double maximum = DBL_MIN;
        double sum = 0;
        for (int i = 0; i<n; i++){
            sum += salary[i];
            if(salary[i]<minimum)minimum = salary[i];
            if(salary[i]>maximum)maximum = salary[i];
        }
        return (sum - minimum - maximum)/(n-2);
    }
};