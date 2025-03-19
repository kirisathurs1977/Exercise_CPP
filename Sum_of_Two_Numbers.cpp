#include<iostream> 
using namespace std;

int  Sum  (int x,int y)
{
    return x+y;
}

int main(){
   int a, b;
   
   cout << "Enter the first number:"<<endl;
   cin >> a;
   cout << "Enter the second number:"<<endl;
   cin >> b;
    
   int sum=Sum(a,b);
   cout<<"total:"<<sum;
}