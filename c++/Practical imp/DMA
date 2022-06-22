//Dynamic memeory allocation:

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here

 int size;
cout<< "Enter the size of the array: "<<endl;
cin>>size;
 int* p=new int[size];
 for(int i=0;i<size;i++){
     cin>>p[i];
 }
 
cout<<"The entered array: "<<endl;
 
 for(int i=0;i<size;i++){
     cout<<p[i]<<endl;
 }
 
    return 0;
    
    
    
//Using malloc()

//p[i] is same as *(p+i)
#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter the number of items: "<<endl;
    
    cin>>number;
    
    int *p=(int *)malloc(number*sizeof(int));//same as int *p=new int();
    
    cout<<"Enter the items:";
    for(int i=0;i<number;i++){
        cin>>p[i];
    }
    
    cout<<"Output:";
    for(int i=0;i<number;i++){
        cout<<p[i]<<endl;
    }


    return 0;
}

}
