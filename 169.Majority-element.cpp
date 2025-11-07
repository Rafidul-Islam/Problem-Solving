#include <iostream>
#include <vector>
using namespace std;

int Majority(vector<int> nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
                if (count > n / 2)
                {
                    return nums[i];
                }
            }
        }
    }
    return {};
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int majority = Majority(nums);

    cout << "Majority Element : " << majority << endl;
}
