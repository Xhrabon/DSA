#include<bits/stdc++.h>
using namespace std;

void selection(int arr[5])
{
    int min_idx;

    for(int i = 0; i<5-1; i++)
    {
        min_idx = i;
        for(int j = i+1; j<5; j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx = j;
            }
            if(min_idx!=i)
            {
                swap(arr[min_idx], arr[i]);

            }
        }
    }

}

void display(int arr[5])
{
    for(int i = 0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[5] = {5,4,3,2,1};

    selection(arr);
    display(arr);

}

/*

#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    int min_idx;

    for(int i = 0; i<n-1; i++)
    {
        min_idx = i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx = j;

            }
        }
        if(min_idx != i)
            {
                swap(arr[min_idx], arr[i]);
            }
    }
}

void display(int arr[], int s)
{
    for(int i = 0; i<s; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr, n);
    display(arr,n);


}
*/
