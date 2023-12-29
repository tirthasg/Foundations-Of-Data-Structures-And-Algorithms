#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include "../../Utility-Functions/Input-Vector.h"
#include "../../Utility-Functions/Print-Vector.h"

void SelectionSort(vector<int> &nums)
{
    int N = nums.size();

    for (int i = N - 1; i >= 0; --i) {
        int indexOfMax = i;
        for (int j = i - 1; j >= 0; --j)
            if (nums[j] > nums[indexOfMax])
                indexOfMax = j;

        swap(nums[i], nums[indexOfMax]);
    }
}

int main()
{
    vector<int> nums = InputVector();

    SelectionSort(nums);
    PrintVector(nums);

    return 0;
}