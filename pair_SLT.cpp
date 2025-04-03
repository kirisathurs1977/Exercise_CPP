#include<iostream>
#include <utility>  

using namespace std;

int main()
{ 
    pair<int,int>pr;
    pr={4,5};
    pr.second=7;
    cout<<pr.first<<endl;
    cout<<pr.second<<endl;
}