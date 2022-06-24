// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int count=0;
class sample{
  public:
  sample(){
      count++;
      cout<<"Creating object :"<<count<<endl;
      
  }
  ~sample(){
     
      cout<<"Destroying object: "<<count<<endl;
       count--;
  }
};

int main() {
   sample s1;
   sample s2;
   sample s3;
   return 0;
}
