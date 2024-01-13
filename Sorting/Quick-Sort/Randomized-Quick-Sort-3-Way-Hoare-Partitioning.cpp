#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

#include "../../Utility-Functions/Input-Vector.h"
#include "../../Utility-Functions/Print-Vector.h"

void Helper(vector<int> &nums, int start, int end)
{
    if (start >= end)
        return;

    srand(time(NULL));
    int randomIndex = rand() % (end - start + 1) + start;
    
    swap(nums[start], nums[randomIndex]);

    int pivot = nums[start];
    int smaller = start;
    int equal = start + 1;
    int bigger = end;

    while (equal <= bigger)
        if (nums[equal] == pivot)
            ++equal;
        else if (nums[equal] < pivot)
            swap(nums[++smaller], nums[equal++]);
        else if (nums[bigger] > pivot)
            --bigger;
        else
            swap(nums[equal], nums[bigger--]);

    swap(nums[start], nums[smaller]);

    Helper(nums, start, smaller - 1);
    Helper(nums, equal + 1, end);
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