class Solution {
public:
    double average(vector<int>& salary) {
        int sum = 0;
        int min_sal = INT_MAX;
        int max_sal = INT_MIN;
        int n = salary.size();
        for(int i=0;i<n;i++){
            sum += salary[i];
            min_sal = min(min_sal, salary[i]);
            max_sal = max(max_sal, salary[i]);
        }
        sum -= (max_sal + min_sal);
        return sum/((n-2)*1.0);
    }
};