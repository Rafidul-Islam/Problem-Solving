#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 1, 2, 3, 3};
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
};
