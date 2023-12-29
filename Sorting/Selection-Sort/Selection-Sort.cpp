#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include "../../Utility-Functions/Input-Vector.h"
#include "../../Utility-Functions/Print-Vector.h"

void SelectionSort(vector<int> &nums)
{
    int N = nums.size();

    for (int i = 0; i < N; ++i) {
        int indexOfMin = i;
        for (int j = i + 1; j < N; ++j)
            if (nums[j] < nums[indexOfMin])
                indexOfMin = j;

        swap(nums[i], nums[indexOfMin]);
    }
}

int main()
{
    vector<int> nums = InputVector();

    SelectionSort(nums);
    PrintVector(nums);

    return 0;
}