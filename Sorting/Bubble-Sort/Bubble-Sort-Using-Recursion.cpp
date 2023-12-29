#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include "../../Utility-Functions/Input-Vector.h"
#include "../../Utility-Functions/Print-Vector.h"

void Helper(vector<int> &nums, int i)
{
    int N = nums.size();
    if (i == N)
        return;

    for (int j = N - 1; j > i; --j)
        if (nums[j - 1] > nums[j])
            swap(nums[j - 1], nums[j]);

    Helper(nums, i + 1);
}

void BubbleSort(vector<int> &nums)
{
    Helper(nums, 0);
}

int main()
{
    vector<int> nums = InputVector();

    BubbleSort(nums);
    PrintVector(nums);

    return 0;
}