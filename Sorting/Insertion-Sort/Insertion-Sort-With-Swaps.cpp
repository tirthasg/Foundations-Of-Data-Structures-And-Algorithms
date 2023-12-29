#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include "../../Utility-Functions/Input-Vector.h"
#include "../../Utility-Functions/Print-Vector.h"

void InsertionSort(vector<int> &nums)
{
    int N = nums.size();

    for (int i = 0; i < N; ++i) {
        int j = i - 1;

        while (j >= 0 && nums[j] > nums[j + 1]) {
            swap(nums[j], nums[j + 1]);
            --j;
        }
    }
}

int main()
{
    vector<int> nums = InputVector();

    InsertionSort(nums);
    PrintVector(nums);

    return 0;
}