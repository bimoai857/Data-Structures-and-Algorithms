
//Static variable example.

#include<iostream>
using namespace std;

class Counter{
   int n;
   static int count;
   
   public:
   void get_data(int a){
       n=a;
       count++;
   }
   void show_count(){
       cout<<"The count is "<<count<<endl;
   }
};
int Counter::count;
int main(){
    Counter a,b,c;
    a.show_count();
    b.show_count();
    c.show_count();
    
    a.get_data(200);
    b.get_data(500);
    c.get_data(800);
    
    a.show_count();
    b.show_count();
    c.show_count();
    
    return 0;
}
