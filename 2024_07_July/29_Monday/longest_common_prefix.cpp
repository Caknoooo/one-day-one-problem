class Solution
{
public:
  string longestCommonPrefix(vector<string> &strs)
  {
    string ans = "";
    sort(strs.begin(), strs.end());
    int len = strs.size();
    string first = strs[0];
    string last = strs[len - 1];
    int minim = min(first.size(), last.size());

    for (int i = 0; i < minim; i++)
    {
      if (first[i] != last[i])
      {
        return ans;
      }
      ans += first[i];
    }

    return ans;
  }
};