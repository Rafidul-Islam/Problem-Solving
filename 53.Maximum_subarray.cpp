#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int maxSum = INT_MIN;
    int currentSum = 0;
    int n = nums.size();

    for (int val : nums)
    {
        currentSum += val;

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = maxSubArray(nums);

    cout << "Max Sum of the sub array : " << maxSum << endl;

    return 0; 
}