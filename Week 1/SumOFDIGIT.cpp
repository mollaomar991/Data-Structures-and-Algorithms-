
#include<bits/stdc++.h>
using namespace std;



int SumDIgit(int n)
{
    if (n == 0)
        return 0;
    else

        return  (n % 10 + SumDIgit (n / 10));
}



int main()
{

    int n,sum;

    cin>>n;

    sum =SumDIgit(n);
    cout<<sum;

}











