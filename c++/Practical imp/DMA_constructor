// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


class sample{
    int* p,n;
    public:
    sample(int x){
        n=x;
        p=new int[x];
    }
    void get_data(){
        for(int i=0;i<n;i++){
            cout<<"Enter the number: ";
            cin>>p[i];
        }
    }
    void display_data(){
        cout<<"The numbers are: "<<endl;
        for(int i=0;i<n;i++){
            
            cout<<p[i]<<endl;
        }
    }
    
    ~sample(){
        cout<<"Destroying the object...";
        delete p;
    }
};
int main() {
    int number;
    cout<<"Enter the number of data items to be inserted: ";
    cin>>number;
    sample s1(number);
    s1.get_data();
    s1.display_data();
    return 0;
}
