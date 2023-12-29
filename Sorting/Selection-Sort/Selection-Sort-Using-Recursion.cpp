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

    int indexOfMin = i;
    for (int j = i + 1; j < N; ++j)
        if (nums[j] < nums[indexOfMin])
            indexOfMin = j;

    swap(nums[i], nums[indexOfMin]);
    Helper(nums, i + 1);
}

void SelectionSort(vector<int> &nums)
{
    Helper(nums, 0);
}

int main()
{
    vector<int> nums = InputVector();

    SelectionSort(nums);
    PrintVector(nums);

    return 0;
}