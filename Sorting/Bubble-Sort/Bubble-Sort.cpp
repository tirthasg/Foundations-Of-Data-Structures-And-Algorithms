#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include "../../Utility-Functions/Input-Vector.h"
#include "../../Utility-Functions/Print-Vector.h"

void BubbleSort(vector<int> &nums)
{
    int N = nums.size();

    for (int i = 0; i < N; ++i)
        for (int j = N - 1; j > i; --j)
            if (nums[j - 1] > nums[j])
                swap(nums[j - 1], nums[j]);
}

int main()
{
    vector<int> nums = InputVector();

    BubbleSort(nums);
    PrintVector(nums);

    return 0;
}