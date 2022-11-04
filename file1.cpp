#include <iostream>
#include <vector>
using namespace std;

vector<int> Farhat(int nums[], int target, int size)
{

  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (nums[i] + nums[j] == target)
      {
        return {i, j};
      }
    }
  }
  return {-1, -1};
}

int main()
{
  int target = 15;

  int nums[] = {100, 21, 23, 7, 8};
  int size = sizeof(nums) / sizeof(nums[0]);
  vector<int> Moe = Farhat(nums, target, size);
  cout << Moe[0] << ", " << Moe[1];
}