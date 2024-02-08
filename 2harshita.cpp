#include<iostream>
using namespace std;

int main() 
{
    int n, key, lb, ub, mid, a, l, u, flag = 0, i, j, k;
    cout << "Enter the number of times you want to run the loop: " << endl;
    cin >> a;

    for (i = 0; i < a; i++)
    {
        cout << "Enter the array limit: " << endl;
        cin >> n;
        int arr[n];
        cout << "Enter the array elements: " << endl;
        for (j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        cout << "Enter the key to be searched: " << endl;
        cin >> key;

        lb = 0;
        ub = n - 1;
        flag = 0;

        while (lb <= ub)
        {
            mid = (lb + ub) / 2;
            if (arr[mid] == key) {
                flag = 1;
                l = mid + 1;
                u = mid - 1;

                while (l < n && arr[l] == key)
                {
                    flag++;
                    l++;
                }
                while (u >= 0 && arr[u] == key) 
                {
                    flag++;
                    u--;
                }
                break; 
            }
            else if (arr[mid] < key) 
            {
                lb = mid + 1;
            }
            else 
            {
                ub = mid - 1;
            }
        }

        if (flag > 0) {
            cout << "The frequency of " << key << " is " << flag << endl;
        }
        else 
        {
            cout << "Key not found" << endl;
        }
    }
    return 0;
}
