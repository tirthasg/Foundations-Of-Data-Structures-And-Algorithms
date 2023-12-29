vector<int> InputVector()
{
    int N;
    cin >> N;

    vector<int> nums(N);
    for (int i = 0; i < N; ++i)
        cin >> nums[i];

    return nums;
}