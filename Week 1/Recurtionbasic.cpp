#include<bits/stdc++.h>
using namespace std;


void PrintuptoN(int n)
{
    if(n==0) return ;

    PrintuptoN(n-1);

    cout<< n<<" ";

}

int main()
{
    int n;
    cout<<"Enter The Number"<<endl;
    cin >>n;
    cout<<endl;
    PrintuptoN(n);
    return 0;
}


