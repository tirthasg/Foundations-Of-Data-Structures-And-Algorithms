#include <iostream>
#include <vector>
using namespace std;

#include "../../Utility-Functions/Input-Vector.h"
#include "../../Utility-Functions/Print-Vector.h"

void Helper(
    vector<int> &nums,
    int start,
    int end,
    vector<int> &aux
)
{
    if (start == end)
        return;

    int mid = start + (end - start) / 2;
    Helper(nums, start, mid, aux);
    Helper(nums, mid + 1, end, aux);

    int i = start;
    int j = mid + 1;
    int k = start;

    while (i <= mid && j <= end)
        if (nums[i] <= nums[j])
            aux[k++] = nums[i++];
        else
            aux[k++] = nums[j++];

    while (i <= mid)
        aux[k++] = nums[i++];

    while (j <= end)
        aux[k++] = nums[j++];

    for (k = start; k <= end; ++k)
        nums[k] = aux[k];
}

void MergeSort(vector<int> &nums)
{
    int N = nums.size();
    vector<int> aux(N);
    
    Helper(nums, 0, N - 1, aux);
}

int main()
{
    vector<int> nums = InputVector();

    MergeSort(nums);
    PrintVector(nums);

    return 0;
}