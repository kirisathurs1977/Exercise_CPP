#include<iostream>
#include <utility>  

using namespace std;

int main()
{ 
    pair<pair<int,int>,int>pr;
    auto pr = make_pair((2,3),6);
   // pr={4,5};
    pr.second=7;
    cout<<pr.first.first<<endl;
    cout<<pr.second<<endl;
}