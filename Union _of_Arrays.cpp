class Solution 
{
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) 
{
        vector<int> result;
        int i = 0, j = 0;
        while (i < a.size() && j < b.size()) 
        {
            while (i > 0 && i < a.size() && a[i] == a[i - 1]) i++;
            while (j > 0 && j < b.size() && b[j] == b[j - 1]) j++;
            if (i >= a.size() || j >= b.size()) break;
            if (a[i] < b[j]) 
            {
                result.push_back(a[i++]);
            } 
            else if (a[i] > b[j]) 
            {
                result.push_back(b[j++]);
            } 
            else 
            {
                result.push_back(a[i]);
                i++;
                j++;
            }
        }
        while (i < a.size()) {
            if (i == 0 || a[i] != a[i - 1]) 
            {
                result.push_back(a[i]);
            }
            i++;
        }
        while (j < b.size()) 
        {
            if (j == 0 || b[j] != b[j - 1]) 
            {
                result.push_back(b[j]);
            }
            j++;
        }
        return result;
    }
};
