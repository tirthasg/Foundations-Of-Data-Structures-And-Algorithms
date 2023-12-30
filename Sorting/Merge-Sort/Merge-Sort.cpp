#include <iostream>
#include <vector>
using namespace std;

#include "../../Utility-Functions/Input-Vector.h"
#include "../../Utility-Functions/Print-Vector.h"

void Helper(vector<int> &nums, int start, int end)
{
    if (start == end)
        return;

    int mid = start + (end - start) / 2;
    Helper(nums, start, mid);
    Helper(nums, mid + 1, end);

    int size = end - start + 1;
    vector<int> aux(size);
    
    int i = start;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= end)
        if (nums[i] <= nums[j])
            aux[k++] = nums[i++];
        else
            aux[k++] = nums[j++];

    while (i <= mid)
        aux[k++] = nums[i++];

    while (j <= end)
        aux[k++] = nums[j++];

    for (k = 0; k < size; ++k)
        nums[start + k] = aux[k];
}

void MergeSort(vector<int> &nums)
{
    int N = nums.size();

    Helper(nums, 0, N - 1);
}

int main()
{
    vector<int> nums = InputVector();

    MergeSort(nums);
    PrintVector(nums);

    return 0;
}