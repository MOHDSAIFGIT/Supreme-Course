#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main()
{
    vector<int> arr{10, 20, 30, 40,50,60};
    int sum = 100;

    for (int i = 0; i < arr.size(); i++)
    {
        int ele1 = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            int ele2 = arr[j];

            for (int k = j + 1; k < arr.size(); k++)
            
            {
                int ele3 = arr[k];
                if (ele1 + ele2 + ele3 == sum)
                {
                    
                    cout << "pair found " << ele1 << "," << ele2<< "," << ele3 << endl;
                }
            }
        }
    }
}