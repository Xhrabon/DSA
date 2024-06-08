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
