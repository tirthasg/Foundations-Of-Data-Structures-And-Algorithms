#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include "../../Utility-Functions/Input-Vector.h"
#include "../../Utility-Functions/Print-Vector.h"

void BubbleSort(vector<int> &nums)
{
    int N = nums.size();

    for (int i = N - 1; i >= 0; --i)
        for (int j = 0; j < i; ++j)
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
}

int main()
{
    vector<int> nums = InputVector();

    BubbleSort(nums);
    PrintVector(nums);

    return 0;
}