#include <iostream>
using namespace std;

int main(){
      int a,b,c, largest;

      cout<<"\nEnter the three numbers: ";
      cin>>a>>b>>c;

      largest = a > b ? (a > c ? a : c) : (b > c ? b : c);

      cout<<"\nLargest of three numbers is: "<<largest<<endl;

      return 0;

}