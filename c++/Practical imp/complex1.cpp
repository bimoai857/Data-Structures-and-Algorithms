//returning an object
//addition of two complex numbers


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
  
  Complex sum(Complex c1){
        Complex imd;
        imd.real=c1.real+real;
        imd.img=c1.img+img;
        return imd;
       
  }
  void output(){
       cout<<"The sum of these two imaginary number is "<<real<<"+"<<img<<"i";
  }
};

int main(){
    Complex comp1,comp2,comp3;
    comp1.get_data();
    comp2.get_data();
    comp3=comp2.sum(comp1);
    comp3.output();
    return 0;
}
