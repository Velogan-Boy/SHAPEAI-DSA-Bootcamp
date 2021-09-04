#include <iostream>
using namespace std;

int main(){
      int n1,n2,n3,terms,i;
      n1=0;
      n2=1;
      cout<<"Enter the number of terms: ";    
      cin>>terms;

      if(terms!= 0){
            cout<<n1<<" "<<n2<<" ";  //first showing first two terms   
      
            for(i=2; i<terms; ++i){    
                  n3=n1+n2;    
                  cout<<n3<<" ";    
                  n1=n2;    
                  n2=n3;    
            }       
      } else{
            cout<<"Input invalid"<<endl;
      }
    return 0;
}