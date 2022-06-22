//Adding two complex number
//Call by value

#include<iostream>
using namespace std;

class Complex{
  float real,img;
  public:
  void get_data(){
      cout<<"Enter the real part: ";
      cin>>real;
      cout<<"Enter the imaginary part: ";
      cin>>img;
  }
  
  void sum(Complex c1,Complex c2){
        real=c1.real+c2.real;
        img=c1.img+c2.img;
        cout<<"The sum of these two imaginary number is "<<real<<"+"<<img<<"i";
  }
};

int main(){
    Complex comp1,comp2,comp3;
    comp1.get_data();
    comp2.get_data();
    comp3.sum(comp1,comp2);
    return 0;
}
