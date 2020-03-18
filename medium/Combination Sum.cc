class Solution {
public:
    void findNumbers(vector<int>& ar, int sum, 
                 vector<vector<int> >& res, 
                 vector<int>& r, int i) 
    { 
        if (sum < 0) 
            return; 
        if (sum == 0) 
        { 
            res.push_back(r); 
            return; 
        }  
        while (i < ar.size() && sum - ar[i] >= 0) 
        { 
            r.push_back(ar[i]); 
            findNumbers(ar, sum - ar[i], res, r, i); 
            i++; 
            r.pop_back(); 
        } 
} 
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end()); 
        vector<int> r; 
        vector<vector<int> > res; 
        findNumbers(candidates, target, res, r, 0); 
        return res; 
    }
};
