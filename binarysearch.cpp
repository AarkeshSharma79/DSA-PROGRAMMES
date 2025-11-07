#include<iostream>
#include<vector>
#include<algorithm> // for sort
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size: ";
    cin >> n;

    cout << "Enter the element you want to search: ";
    int target;
    cin >> target;

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }

    // Sort the vector before binary search
    sort(v.begin(), v.end());

    int first = 0;
    int last = n - 1;
    bool found = false;

    while(first <= last)
    {
        int mid = (first + last) / 2;
        if(v[mid] == target)
        {
            found = true;
            break;
        }
        else if(v[mid] > target)
            last = mid - 1;
        else
            first = mid + 1;
    }

    if(found)
        cout << "Number is found";
    else
        cout << "Number is not found";

    return 0;
}