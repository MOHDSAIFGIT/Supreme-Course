#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;

int main()
{

    vector<int> arr{10, 2,3, 3, 4, 6, 8};
    vector<int> brr{3,3, 4, 10};

    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int ele = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {

            if (ele == brr[j])
            {
                //mark
                brr[j] = INT_MIN;
                ans.push_back(ele);
            }
        }
    }

    cout << "printing Intersection : ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}