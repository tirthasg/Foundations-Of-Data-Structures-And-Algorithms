#include <iostream>
#include <vector>
using namespace std;

#include "../../Utility-Functions/Input-Vector.h"
#include "../../Utility-Functions/Print-Vector.h"

void InsertionSort(vector<int> &nums)
{
    int N = nums.size();

    for (int i = 0; i < N; ++i) {
        int temp = nums[i];
        int j = i - 1;

        while (j >= 0 && nums[j] > temp) {
            nums[j + 1] = nums[j];
            --j;
        }

        nums[j + 1] = temp;
    }
}

int main()
{
    vector<int> nums = InputVector();

    InsertionSort(nums);
    PrintVector(nums);

    return 0;
}