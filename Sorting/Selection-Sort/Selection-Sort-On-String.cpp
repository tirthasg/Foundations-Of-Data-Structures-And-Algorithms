#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void SelectionSort(string &str)
{
    int N = str.size();

    for (int i = 0; i < N; ++i) {
        int indexOfMin = i;
        for (int j = i + 1; j < N; ++j)
            if (str[j] < str[indexOfMin])
                indexOfMin = j;
        
        swap(str[i], str[indexOfMin]);
    }
}

int main()
{
    string str;
    cin >> str;

    SelectionSort(str);
    cout << str << endl;

    return 0;
}