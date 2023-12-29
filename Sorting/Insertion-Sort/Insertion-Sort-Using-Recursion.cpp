#include <iostream>
#include <vector>
using namespace std;

#include "../../Utility-Functions/Input-Vector.h"
#include "../../Utility-Functions/Print-Vector.h"

void Helper(vector<int> &nums, int i)
{
    if (i < 0)
        return;

    Helper(nums, i - 1);

    int temp = nums[i];
    int j = i - 1;

    while (j >= 0 && nums[j] > temp) {
        nums[j + 1] = nums[j];
        --j;
    }

    nums[j + 1] = temp;
}

void InsertionSort(vector<int> &nums)
{
    int N = nums.size();

    Helper(nums, N - 1);
}

int main()
{
    vector<int> nums = InputVector();

    InsertionSort(nums);
    PrintVector(nums);

    return 0;
}