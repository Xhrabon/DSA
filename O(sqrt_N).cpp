// example : O(logn) in divisor find program

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin>>number;

    vector <int> v;

    for(int i = 1; i*i <=number; i++)
    {
        if(number%i == 0)
        {
            v.push_back(i);

            if(number/i != i)
        {
            v.push_back(number/i);
        }
        }

        
    }

    sort(v.begin(), v.end());

    for(int x : v)
    {
        cout<<x<<" ";
    }
}
