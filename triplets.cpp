


#include <iostream>
#include <vector>


using namespace std;



void triplet(vector<int> nums, int target) {

  for (int i = 0; i < nums.size(); i++)
  {
    for (int j = i + 1; j < nums.size(); j++)
    {
      for (int k = j + 1; k < nums.size(); k++)
      {
        if(nums[i] + nums[j] + nums[k] == target) {
            cout << nums[i] << ", " << nums[j] << ", " << nums[k] << "\n";
        }
      }
      
    }
    
  }
  
}


int main() {
  vector<int> nums = {0, -1,2, -3, 1};

  triplet(nums, 0);
} 