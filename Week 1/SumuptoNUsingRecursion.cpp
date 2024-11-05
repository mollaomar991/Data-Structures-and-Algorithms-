#include<bits/stdc++.h>
using namespace std;



int sumupton(int n)
{

    if (n == 0)
        return 0;
    else
        return  n + sumupton(n - 1);
}


int main()
{

    int n,sum =0;

    cin>>n;

    sum= sum+sumupton(n);
    cout<<sum;


}











