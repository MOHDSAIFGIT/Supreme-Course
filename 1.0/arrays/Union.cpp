#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int asize = 5;
    int brr[] = {6, 7, 8, 9};
    int bsize = 4;

    vector<int> ans;

    for (int i = 0; i < asize; i++)
    {

        ans.push_back(arr[i]);
    }

    for (int i = 0; i < bsize; i++)
    {

        ans.push_back(brr[i]);
    }

    cout << "printing Union : ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}