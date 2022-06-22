
//Implementation of friend function

#include<iostream>
using namespace std;

class Avg{
    float a,b;
    public:
    void get_data(){
        cout<<"Enter the first value: ";
        cin>>a;
        cout<<"Enter the second value: ";
        cin>>b;
        
    }
    friend void average(Avg a);
};

void average(Avg a){
 float f;
        f=(a.a+a.b)/2;
        cout<<"The average value is "<<f<<endl;
}

int main(){
  Avg a;
  a.get_data();
  average(a);
  return 0;
}
