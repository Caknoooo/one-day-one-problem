class Solution
{
public:
  int reverse(int x)
  {
    long long rev;

    while (x != 0)
    {
      rev = (rev * 10) + (x % 10);
      x /= 10;
    }

    if (rev > INT_MAX || rev < INT_MIN)
      return 0;

    return int(rev);
  }
};