//Multiple Inheritance.

#include <iostream>
using namespace std;
class A{
    int sum;
    public:
    void Sum(int x,int y,int z){
        sum=x+y+z;
        cout<<"The sum is "<<sum<<endl;
    }
};


class B{
    int product;
    public:
    void Product(int x, int y, int z){
        product=x*y*z;
        cout<<"The product is "<<product<<endl;
    }
};

class C:public A, public B{
  float divide;
  public:
  void Divide(int x, int y){
      divide=x/y;
      cout<<"The output is "<<divide<<endl;
  }
  
};

int main() {
 
   C c1;
   c1.Sum(2,8,45);
   c1.Product(5,6,8);
   c1.Divide(100,10);
    return 0;
}
