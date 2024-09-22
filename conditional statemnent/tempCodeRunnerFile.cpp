#include <iostream>
using namespace std;
int main()
{
  int row,col,n;
  cout<<"Enter the number: ";
  cin>>n;
  for(row=n;row>=1;row--){
    //space
    for(col=1;col<=n-row;col++)
    //pattern print
    cout<<"  ";
    for(col=1;col<=2*row-1;col++)
    cout<<"*"<<" ";
  cout<<endl;
  }
}