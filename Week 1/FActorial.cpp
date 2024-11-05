#include<bits/stdc++.h>
using namespace std;



int Factorial(int n)
{

    if (n >= 1)
        return n * Factorial(n - 1);
    else
        return 1;
}



int main()
{

    int n,factorial;

    cin>>n;

    factorial = Factorial(n);
    cout<<factorial;

}












