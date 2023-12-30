#include <iostream>
#include <vector>
using namespace std;

#include "../../Utility-Functions/Input-Vector.h"
#include "../../Utility-Functions/Print-Vector.h"

void Helper(vector<int> &nums, int start, int end)
{
    if (start >= end)
        return;

    int size = end - start + 1;
    vector<int> aux(size);

    int pivot = nums[start];
    int i = 0;
    int j = size - 1;

    for (int k = start + 1; k <= end; ++k)
        if (nums[k] <= pivot)
            aux[i++] = nums[k];
        else
            aux[j--] = nums[k];

    aux[i] = pivot;

    for (int k = 0; k < size; ++k)
        nums[start + k] = aux[k];

    Helper(nums, start, start + i - 1);
    Helper(nums, start + i + 1, end);
}

void QuickSort(vector<int> &nums)
{
    int N = nums.size();

    Helper(nums, 0, N - 1);
}

int main()
{
    vector<int> nums = InputVector();

    QuickSort(nums);
    PrintVector(nums);

    return 0;
}